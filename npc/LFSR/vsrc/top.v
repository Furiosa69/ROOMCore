module top (
	input clk,
	output reg [13:0] value_seg,
	output  [41:0] empty_seg,
	output reg [7:0] out_led
);
	reg [7:0] out_num;
	assign out_led = out_num;
	assign empty_seg = {42{1'b1}};

	lfsr lfsr1(
		.clk(clk),
		.out_num(out_num)
	);
	
	
	bcd7seg seg0(
		.b(out_num[3:0]),
		.h(value_seg[6:0])
	);
	bcd7seg seg1(
		.b(out_num[7:4]),
		.h(value_seg[13:7])
	);
	

endmodule 
