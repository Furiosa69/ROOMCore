module IFU(
	input 				clk,
	input 				reset,
	input [31:0]	imm,
	input					br_taken,
	output reg [31:0] inst,
	output reg [31:0] pc_out ,
	input [31:0]  ret,
	input [ 3:0] 	pc_cnt 
);

	wire jalr  = pc_cnt[3];
	wire jal   = pc_cnt[2] & pc_cnt[1] & pc_cnt[0];
	wire bxx   = (|pc_cnt) & (!jalr) & (!jal);
	wire [31:0] target_pc;
  assign target_pc  = (bxx && br_taken) ? pc_out + imm : 
                      (jal						) ? pc_out + imm :
		  				 	      (jalr 					) ? ret          : pc_out + 32'd4;

	always @(posedge clk) begin
		if(reset) begin
			pc_out <= 32'h80000000;
		end else begin
   	  pc_out 	<=  target_pc;
		end
	end

	always @(*) begin
		inst = pmem_read(pc_out, 4);
	end

endmodule

