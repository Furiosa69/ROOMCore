// 触发器模板
module Reg #(WIDTH = 32, RESET_VAL = 32'b0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  output reg [WIDTH-1:0] dout,
  input wen
  );

  always @(posedge clk) begin
      if (rst) dout <= RESET_VAL;
      else if (wen) dout <= din + 4;//pc+4
  end

endmodule

	  
   

