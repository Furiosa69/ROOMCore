module top(
	input clk,
	input rst,
	output [31:0] result
);


	wire [31:0] ins;
	wire [31:0] pc;
	wire [11:0] imm;
	wire [4:0] rs1;
	wire [2:0] fun3;
	wire [4:0] rd;
	wire [6:0] fun1;

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
		.pc(pc),
		.rs1(rs1),
		.rd(rd),
		.fun1(fun1),
		.fun3(fun3),
		.imm(imm),
		.result(result)
	);

endmodule

