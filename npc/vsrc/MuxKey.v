//module mux21(a,b,s,y);
//  input   a,b,s;
//  output  y;
//
//  // 通过MuxKey实现如下always代码
//  // always @(*) begin
//  //  case (s)
//  //    1'b0: y = a;
//  //    1'b1: y = b;
//  //  endcase
//  // end
//  MuxKey #(2, 1, 1) i0 (y, s, {
//    1'b0, a,
//    1'b1, b
//  });
//endmodule
//
//module mux41(a,s,y);
//  input  [3:0] a;
//  input  [1:0] s;
//  output y;
//
//  // 通过MuxKeyWithDefault实现如下always代码
//  // always @(*) begin
//  //  case (s)
//  //    2'b00: y = a[0];
//  //    2'b01: y = a[1];
//  //    2'b10: y = a[2];
//  //    2'b11: y = a[3];
//  //    default: y = 1'b0;
//  //  endcase
//  // end
//  MuxKeyWithDefault #(4, 2, 1) i0 (y, s, 1'b0, {
//    2'b00, a[0],
//    2'b01, a[1],
//    2'b10, a[2],
//    2'b11, a[3]
//  });
//endmodule

// 不带默认值的选择器模板
module MuxKey #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);
  MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 0) i0 (out, key, {DATA_LEN{1'b0}}, lut);
endmodule



// 带默认值的选择器模板
//module MuxKeyWithDefault #(NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
//  output [DATA_LEN-1:0] out,
//  input [KEY_LEN-1:0] key,
//  input [DATA_LEN-1:0] default_out,
//  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
//);
//  MuxKeyInternal #(NR_KEY, KEY_LEN, DATA_LEN, 1) i0 (out, key, default_out, lut);
//endmodule

