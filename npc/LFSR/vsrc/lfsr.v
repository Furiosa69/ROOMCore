module lfsr(
	input clk,
	output reg [7:0] out_num
);

	reg xor_bit;
	reg [7:0] in_num;

	initial begin
		xor_bit = 1'b0;
		in_num = 8'b00000001;
		out_num = 8'b0;
	end
	
	always@(clk)begin
	xor_bit = in_num[4]^in_num[3]^in_num[2]^in_num[0];
	out_num = {xor_bit,in_num[7:1]};//右移
	in_num = out_num;
	end

endmodule
