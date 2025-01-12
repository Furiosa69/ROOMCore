module top(
	input clk,
	input rst,
//	output reg [11:0] imm,
//	output reg [4:0] rs1,
//	output reg [2:0]  fun3,
//	output reg [4:0] rd,
//	output reg [6:0] fun1,
//	output [31:0] rs1_data,
	output reg [31:0] pc,
	output reg [31:0]	ins,
	output [31:0] result
);

	reg [11:0] imm;
	reg [4:0] rs1;
	reg [2:0] fun3;
	reg [4:0] rd;
	reg [6:0] fun1;
  //other
 reg [31:0] rs1_data;

  initial begin
  	pc = 32'h80000000;
  end
	
  //触发器 
	Reg #(32,32'b0) i0(clk,rst,pc,pc,1'b1);

	ysyx_24080018_IFU ifu(
		.clk(clk),
		.rst(rst),
		.pc(pc),
		.ins(ins)
  );

	ysyx_24080018_IDU idu(
		.clk(clk),
		.rst(rst),
		.ins(ins),
		.imm(imm),
		.rs1(rs1),
		.fun3(fun3),
		.rd(rd),
		.fun1(fun1)
  );


	ysyx_24080018_EXU exu(
		.clk(clk),
		.rst(rst),
		.fun3(fun3),
		.rs1_data(rs1_data),
		.imm(imm),
		.result(result)
	);

endmodule

