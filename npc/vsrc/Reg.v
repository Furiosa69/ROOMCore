//module example(
//	input clk,
//	input rst,
//	input [3:0] in,
//	output [3:0] out
//);
//	Reg #(1,1'b1) i0 (clk,rst,in[0],out[0],1'b1);//width 1bit,reset to 1'b1,always enable write
//	Reg #(3,3'b0) i1 (clk,rst,in[3:1],out[3:1],out[0]);//width 3bit,reset to 3'b0,enable write out[0]
//endmodule

// 触发器模板
module Reg #(WIDTH = 1, RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  input wen
  );

  always @(posedge clk) begin
      if (rst) dout <= RESET_VAL;
      else if (wen) dout <= din;
  end

endmodule

	  
   

