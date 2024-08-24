module top(
	input [7:0] operate,//输入操作数
	input [4:0] button,
	output [6:0] instr_seg,//指令号
	output reg CF,ZF,SF,OF,//进位，0，负，溢出
	output reg en,
	output [20:0] value_seg,//结果
	output [34:0] empty_seg,
	output reg [3:0] value//二进制表示
);
	wire [2:0] instr;
	wire [3:0] a,b;
	wire [7:0] value_num;
	wire [3:0] value_sign;
	wire [3:0] value_show;
	wire [3:0] b_comp = {4{instr[0]}}^b;//最小负数取反再加一会覆盖符号位

	assign {a,b} = operate;
	assign value_show = SF ?(~value+1) : value;
	assign value_num[7:4] = value_show / 10;
	assign value_num[3:0] = value_show % 10;
	assign value_sign[3:0] = 4'd11 - {3'b000,(value[3]==1)};
	
	always @(operate or en or instr)begin
		if(en)begin
		case(instr)
		//加减法
		3'd0,3'd1:begin
			value = b_comp + {1'b0,instr};//b的补码
			{CF,value} = value + a;//方法一
			OF = (a[3] == b_comp[3]) && (value[3] != a[3]);
			  end
		//逻辑运算
		3'd2 :    begin
			value = ~a;
			{CF,OF} = 2'd0;
			  end	
		3'd3 :    begin 
			value = a&b;
			{CF,OF} = 2'd0;
			  end	
		3'd4 :    begin
			value = a|b;
			{CF,OF} = 2'd0;
			  end	
		3'd5 :    begin
			value = a^b;
			{CF,OF} = 2'd0;
			  end	
		//关系运算
		3'd6 :    begin
			value = {3'b000,a<b};
			{CF,OF} = 2'd0;
			  end	
		3'd7 :    begin
			value = {3'b000,a==b};
			{CF,OF} = 2'd0;
			  end	
		endcase
		ZF = value == 0;//判断是否0
		SF = value[3] == 1;//判断是否负数
		end
		else begin
		value = 0;
		{CF,ZF,SF,OF} = 4'd0;
		end
	end	
	
	bcd7seg seg_instr(
		.b({1'b0,instr}),
		.h(instr_seg)
	);
		
	bcd7seg seg_0(
		.b(value_num[3:0]),
		.h(value_seg[6:0])
	);	

	bcd7seg seg_1(
		.b(value_num[7:4]),
		.h(value_seg[13:7])
	);	

	bcd7seg seg_2(
		.b(value_sign[3:0]),
		.h(value_seg[20:14])
	);	
	button button0(
		.button(button),
		.instr(instr),
		.en(en)
	);
	assign empty_seg = {35{1'b1}};//置空不需要的数码管

endmodule
