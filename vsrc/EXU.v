module EXU(
	input clk,
	input reset,
	input  [31:0] pc_in,
	output reg [31:0] pc_out,
	input  [ 3:0] pc_cnt,
	input  [ 3:0] alu_cnt,
	input 				auipc,
	input 				lui,
	input 				ebreak,
	input					load,
	input  [31:0] imm,
	output [31:0] alu_result,
	input  [31:0] rdata1,
	input  [31:0] rdata2,
	input  [31:0] data_load,
	input  [ 5:0] ins_cnt,

	input idu_exu_valid,
	output exu_idu_ready,
	output exu_mem_valid,
	input mem_exu_ready
);

	localparam IDLE  = 1'b0;
	localparam READY = 1'b1;
	wire UType,JType,BType,IType,SType,RType;
	assign {UType,JType,BType,IType,SType,RType} = ins_cnt; 
	
	reg c_state,n_state;
	reg [31:0] pc_exu;
	wire [31:0] alu_a,alu_b;

	assign alu_a = ( auipc ) ? pc_exu :
								 ( lui   ) ? 32'b0  :
								 rdata1;

	assign alu_b = ( UType | JType | IType ) ? imm :
								 ( RType | SType | BType ) ? rdata2 : 32'b0;

	wire br_taken;
	assign br_taken = ( pc_cnt == 4'b0001 ) ? ($signed(alu_a) == $signed(alu_b)) :
										( pc_cnt == 4'b0010 ) ? ($signed(alu_a) != $signed(alu_b)) :
										( pc_cnt == 4'b0011 ) ? ($signed(alu_a) <  $signed(alu_b)) :
										( pc_cnt == 4'b0100 ) ? ($signed(alu_a) >= $signed(alu_b)) :
										( pc_cnt == 4'b0101 ) ? (        alu_a  <          alu_b ) :
										( pc_cnt == 4'b0110 ) ? (        alu_a  >=         alu_b ) : 
										1'b0;

	always @(posedge clk or posedge reset) begin
		if(reset) begin
			pc_exu <= 32'h80000000;
			c_state <= IDLE;
		end else begin
			c_state <= n_state;
			case(c_state)
				IDLE:if (idu_exu_valid) begin
								if(ebreak) npctrap();
								pc_exu <= (BType) ? ((br_taken) ? pc_in + imm : pc_in + 32'd4) : 
								 					(JType) ? pc_in + imm : pc_in + 32'd4;
						 end
				READY:if (mem_exu_ready) pc_out <= pc_exu;
				default : ;
			endcase
		end
	end

	always @(*)begin
		case(c_state)
			IDLE : if(idu_exu_valid) n_state = READY;
						 else 						 n_state = IDLE;
			READY: if(mem_exu_ready) n_state = IDLE;
						 else 						 n_state = READY;
			default : n_state = IDLE;
		endcase
	end

	assign exu_idu_ready = ( c_state == IDLE ) ;
	assign exu_mem_valid = ( c_state == READY) ;
	wire  [31:0]  _alu_result;
	assign _alu_result = ( alu_cnt === 4'b0001 ) ? (  			 alu_a  + 				 alu_b ): // + (add/addi)
											 ( alu_cnt === 4'b0010 ) ? (  			 alu_a  - 				 alu_b ): // - (sub)
											 ( alu_cnt === 4'b0011 ) ? (($signed(alu_a) <  $signed(alu_b))? 32'd1:32'd0 ): // sign< (slt/slti)
											 ( alu_cnt === 4'b0100 ) ? ((        alu_a  <          alu_b )? 32'd1:32'd0 ): // unsign< (sltu/sltiu)
											 ( alu_cnt === 4'b0101 ) ? ( 				 alu_a  & 				 alu_b ): // & (and/andi)
											 ( alu_cnt === 4'b0110 ) ? ( 				 alu_a  | 				 alu_b ): // | (or/ori)
											 ( alu_cnt === 4'b0111 ) ? (         alu_a  ^ 				 alu_b ): // ^ (xor/xori)
											 ( alu_cnt === 4'b1000 ) ? ( 				 alu_a <<      alu_b[4:0]): // <<0 (sll/slli)
											 ( alu_cnt === 4'b1001 ) ? (         alu_a >>      alu_b[4:0]): // 0>> (srl/srli)
											 ( alu_cnt === 4'b1010 ) ? ( $signed(alu_a)>>>		 alu_b[4:0]): // sign>> (sra/srai)
											 32'b0;

	assign alu_result = ( load ) ? data_load : _alu_result;

endmodule
