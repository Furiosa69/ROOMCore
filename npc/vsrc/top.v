module top(
	input clk,
	input rst,
	output reg [31:0] result
);
	//指令
	reg [31:0] ins;
	reg [31:0] pc;
	//译码
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
	Reg #(32,32'b0) i0(clk,rst,pc,pc+4,1'b1);


	ysyx_24080018_IFU ifu(
		.clk(clk),
		.rst(rst),
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
		.rs1(rs1_data),
		.imm(imm),
		.result(result)
	);

endmodule

module ysyx_24080018_IFU(
	input clk,
	input rst,
	output reg [31:0] ins
);
	always @(posedge clk or posedge rst) begin 
		ins <= 32'b000000000000_00000_000_00000_0011011;//?咋知道寄存器地址
	end
endmodule

/*CPU设计中的指令译码通常是时序逻辑，因为指令的执行需要多个时钟周期，因此译码
结果需要存储在寄存器中*/
module ysyx_24080018_IDU(
	input clk,
	input rst,
	input [31:0] ins,
	output [11:0] imm,
	output [4:0] rs1,
	output [2:0] fun3,
	output [4:0] rd,
	output [6:0] fun1
);
	always @(posedge clk or posedge rst) begin
		imm[11:0] <= ins[31:20];
		rs1[4:0]  <= ins[19:15];
		fun3[2:0] <= ins[14:12];
		rd[4:0]   <= ins[11:7];
		fun1[6:0] <= ins[6:0];
	end
endmodule

import "DPI-C" function int pmem_read(int rs1);

module ysyx_24080018_EXU(
	input clk,
	input rst,
	input [2:0] fun3,
	input [4:0] rs1,
	input [11:0] imm,
	output [31:0] result
);
	reg [31:0] rs1_data;


  always @(posedge clk ) begin
		if(rst) begin
			rs1_data <= 32'b0;
		end else begin
			rs1_data <= pmem_read({27'b0,rs1});
		end
  end

  MuxKey #(1,3,32) i2(
		.out(result),
		.key(fun3),
		.lut({3'b000,rs1_data + {20'b0,imm}})
	);
endmodule

//module RegisterFile #(ADDR_WIDTH = 1, DATA_WIDTH = 1) (
//  input clk,
//  input [DATA_WIDTH-1:0] wdata,
//  input [ADDR_WIDTH-1:0] waddr,
//  input wen
//);
//  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
//  always @(posedge clk) begin
//    if (wen) rf[waddr] <= wdata;
//  end
//endmodule
