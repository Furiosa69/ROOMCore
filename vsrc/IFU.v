module IFU(
	input 				clk,
	input 				reset,
	input  [31:0] pc_in,
	output reg [31:0] pc_out,
	output 				ifu_idu_valid,
	input					idu_ifu_ready
);

	localparam IDLE  = 1'b0;
	localparam READY = 1'b1;

	reg [31:0] pc_ifu;
	reg c_state,n_state;

	always @(posedge clk or posedge reset) begin
		if(reset) begin
			pc_ifu <= 32'h80000000;
			c_state <= IDLE;
		end else begin
			c_state <= n_state;
			case(c_state)
				IDLE : pc_ifu <= pc_in;
				READY: if (idu_ifu_ready) pc_out <= pc_ifu;
				default : ;
			endcase
		end
	end

	always @(*) begin
		case(c_state)
			IDLE	:if(idu_ifu_ready) n_state = READY;
						 else 						 n_state = IDLE;
			READY : 								 n_state = IDLE; 
			default : 							 n_state = IDLE;
		endcase
	end

	assign ifu_idu_valid = ( c_state == READY) ;

endmodule

