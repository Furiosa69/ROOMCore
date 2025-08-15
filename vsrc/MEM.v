module MEM(
	input 				clk,
	input 				reset,
	input  [31:0] pc_in,
	output reg [31:0] pc_out,
	input  [ 4:0] raddr1,
	input  [ 4:0] raddr2,
	output [31:0] rdata1,
	output [31:0] rdata2,
	input  [ 4:0] waddr,
	input	 [31:0] wdata,
	input         mem_cnt,

	input  				exu_mem_valid,
	output 				mem_exu_ready,
	output 				mem_lsu_valid,
	input  				lsu_mem_ready
);

	reg [31:0] pc_mem;
	reg [31:0] rf [0:31];

	wire wen;

	localparam IDLE  = 2'b00;
	localparam WORK  = 2'b01;
	localparam READY = 2'b10;

	reg [1:0] c_state,n_state;
	assign wen = mem_cnt;

	always @(posedge clk or posedge reset) begin
		if(reset) begin
			c_state <= IDLE;
			pc_mem  <= 32'h80000000;
			for(integer i = 1; i < 32; i = i + 1) rf[i] <= 0;
		end else begin
			c_state <= n_state;
			case (c_state)
				IDLE : if(exu_mem_valid) pc_mem <= pc_in;
				WORK : if(wen && (waddr != 0)) rf[waddr] <= wdata;
				READY: if(lsu_mem_ready) pc_out <= pc_mem;
				default : ;
			endcase
		end
	end

	always @(*) begin
		case(c_state)
			IDLE : 
				if(exu_mem_valid) n_state = READY; 
				else 							n_state = IDLE;
			WORK : 							n_state = READY;
			READY:
				if(lsu_mem_ready) n_state = IDLE;
				else 							n_state = READY;
			default:
				n_state = IDLE;
		endcase
	end

	assign mem_exu_ready = ( c_state == IDLE );
	assign mem_lsu_valid = ( c_state == READY);

	assign rdata1 = raddr1 == 0 ? 0 :rf[raddr1];
	assign rdata2 = raddr2 == 0 ? 0 :rf[raddr2];

endmodule 
