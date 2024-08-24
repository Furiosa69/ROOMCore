module top(
	input clk,
	input rst,
	input ps2_clk,
	input ps2_data,
	output [6:0] seg0,
	output [6:0] seg1,
	output [6:0] seg2,
	output [6:0] seg3,
	output [6:0] seg4,
	output [6:0] seg5,
	output [6:0] seg6,
	output [6:0] seg7

);

  reg [7:0] ps2_out;
  reg ps2_over,ps2_ready,ps2_next;
  reg [23:0] ps2_seg;

  ps2_keyboard my_keyboard(
	.clk(clk),
	.resetn(~rst),
	.ps2_clk(ps2_clk),
	.ps2_data(ps2_data),
	.ps2_out(ps2_out),
	.ready(ps2_ready),
	.nextdata_n(ps2_next),
	.overflow(ps2_over)
  );

  //断码则灭
  reg segen ;
  always @(*) begin
          if((ps2_seg[15:8] == 8'hf0 )&&( ps2_seg[7:0] == ps2_seg[23:16]))
                   segen = 0;
          else
                   segen = 1;
  end
  
  
  //三段式状态机
  parameter S1 = 4'b0001;//Read begin
  parameter S2 = 4'b0010;
  parameter S3 = 4'b0100;
  parameter S4 = 4'b1000;
  reg [3:0] current,next;
  
  always @(posedge clk or posedge rst) begin
          if(rst) begin
                  current <= S4;
          end else begin
                  current <= next;
          end
  end

  always @(*) begin
          case(current)
          S4 : next = (ps2_ready==1'b1)? S1:S4;
          S1 : next = S2;
          S2 : next = S3;
          S3 : next = S4;
          default : next = S4;
          endcase
  end
  
  always @(posedge clk) begin
          case(current)
          S4 : ps2_next <= 1;
          S2 : ps2_next <= 0;
          S3 : ps2_next <= 0;
          S1 : ps2_seg[23:0] <= {ps2_seg[15:0],ps2_out[7:0]};
          default: ps2_next <= 1;
          endcase
  end


	
  //扫描码
  bcd7seg ps2_seg0(
	.b(ps2_seg[3:0]),
	.h(seg0),
	.en(segen)
  );

  bcd7seg ps2_seg1(
	.b(ps2_seg[7:4]),
	.h(seg1),
	.en(segen)
  );

  //ASCII码
  reg [7:0] ascii;

  toascii pa2ascii(
	.in(ps2_seg[7:0]),
	.asc(ascii)
  );

  bcd7seg ascii_seg2(
	.b(ascii[3:0]),
	.h(seg2),
	.en(segen)
  );

  bcd7seg ascii_seg3(
	.b(ascii[7:4]),
	.h(seg3),
	.en(segen)
  );

  //不需要
  bcd7seg emtpy_seg4(
	.b(ascii[3:0]),
	.h(seg4),
	.en(1'b0)
  );

  bcd7seg empty_seg5(
	.b(ascii[7:4]),
	.h(seg5),
	.en(1'b0)
  );

  //按键次数
  reg [3:0] count1,count2;
  always @(negedge segen) begin
	if(count1 ==4'd9) begin
		count2 <= count2 + 4'd1;
		count1 <= 4'd0;
	end else begin
		count1 <= count1 + 4'd1;
	end
  end

  bcd7seg count1_seg6(
	.b(count1),
	.h(seg6),
	.en(segen)
  );

  bcd7seg count2_seg7(
	.b(count2),
	.h(seg7),
	.en(segen)
  );

endmodule
