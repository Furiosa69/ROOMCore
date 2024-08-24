module bcd7seg(b,h,en);
	input [3:0] b;
	input en;
	output reg [6:0] h;

	always @(*) begin
	if(en)begin
		case(b[3:0])
		4'd0 : h = ~7'b0111111;
		4'd1 : h = ~7'b0000110;
		4'd2 : h = ~7'b1011011;
		4'd3 : h = ~7'b1001111;
		4'd4 : h = ~7'b1100110;
		4'd5 : h = ~7'b1101101;
		4'd6 : h = ~7'b1111100;
		4'd7 : h = ~7'b0000111;
		4'd8 : h = ~7'b1111111;
		4'd9 : h = ~7'b1101111;
		4'd10 : h = ~7'b1110111;//a
		4'd11 : h = ~7'b1111100;//b
		4'd12 : h = ~7'b0111001;//c
		4'd13 : h = ~7'b1011110;//d
		4'd14 : h = ~7'b1111001;//e
		4'd15 : h = ~7'b1110001;//f
		default : h = 7'b1111111;
		endcase
		end
	else  h = 7'b1111111;
	end
endmodule
