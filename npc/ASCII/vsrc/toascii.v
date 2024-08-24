module toascii(
	input [7:0] in,
	output reg [7:0] asc
);
	always @(*) begin
	case(in)
		8'h15: asc = 8'h51;	//Q
		8'h1d: asc = 8'h57;	//W
		8'h24: asc = 8'h45;	//E
		8'h2d: asc = 8'h52;	//R
		8'h2c: asc = 8'h54;	//T
		8'h35: asc = 8'h59;	//Y
		8'h3c: asc = 8'h55;	//U
		8'h43: asc = 8'h49;	//I
		8'h44: asc = 8'h4f;	//O
		8'h4d: asc = 8'h50;	//P				  	
		8'h1c: asc = 8'h41;	//A
		8'h1b: asc = 8'h53;	//S
		8'h23: asc = 8'h44;	//D
		8'h2b: asc = 8'h46;	//F
		8'h34: asc = 8'h47;	//G
		8'h33: asc = 8'h48;	//H
		8'h3b: asc = 8'h4a;	//J
		8'h42: asc = 8'h4b;	//K
		8'h4b: asc = 8'h4c;	//L
		8'h1a: asc = 8'h5a;	//Z
		8'h22: asc = 8'h58;	//X
		8'h21: asc = 8'h43;	//C
		8'h2a: asc = 8'h56;	//V
		8'h32: asc = 8'h42;	//B
		8'h31: asc = 8'h4e;	//N
		8'h3a: asc = 8'h4d;	//M

		8'h16: asc = 8'h31; 	//1
		8'h1E: asc = 8'h32;	//2 
		8'h26: asc = 8'h33;	//3 
		8'h25: asc = 8'h34;	//4 
		8'h2E: asc = 8'h35;	//5 
		8'h36: asc = 8'h36;	//6 
		8'h3D: asc = 8'h37;	//7 
		8'h3E: asc = 8'h38;	//8 
		8'h46: asc = 8'h39;	//9 
		8'h45: asc = 8'h30;	//0
		
		default : asc = 8'h30;
		endcase
	end
endmodule	
	
