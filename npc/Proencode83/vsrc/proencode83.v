
module bcd7seg(
        input [3:0] b,
        output reg [6:0] h
);

        always @(*) begin
        if(b[3] == 0)
                h = 7'b0000000;
        else begin
                case(b[2:0])
                3'd0 : h = ~7'b0111111;
                3'd1 : h = ~7'b0000110;
                3'd2 : h = ~7'b1011011;
                3'd3 : h = ~7'b1001111;
                3'd4 : h = ~7'b1100110;
                3'd5 : h = ~7'b1101101;
                3'd6 : h = ~7'b1111100;
                3'd7 : h = ~7'b0000111;
                default : h = ~7'b1111111;
                endcase
        end
        end
endmodule


module top(x,en,l,h);
	input [7:0] x;
	input en;
	output [3:0] l;//编码结果
	output [6:0]h;//数码管输出

	reg [2:0] y ;//编码暂存
	integer i;
	wire sign = en & (|x);//输入指示位
	

	always @(*) begin
	if(en) begin
		y = 0;
		for(i = 0;i<=7;i=i+1)
			if(x[i] == 1) y = i[2:0];
		end
	else y = 0;
	end
	
	assign l = {sign,y};

	bcd7seg seg(.b(l),.h(h));
	
endmodule
