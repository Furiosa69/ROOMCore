module button(
        input [4:0] button,
        output reg [2:0] instr,
        output reg en
);
        always @(posedge button[3] or posedge button[2] or posedge button[1] or posedge button[0] or posedge button[4] )begin
                //中：使能取反
                if(button[4]) begin
                        en <= ~en;
                end
                else begin
                case(button)
                //上：指令+2
                5'b01000: begin
                        instr <= instr + 2;
                        en    <= 0;
                         end
                //下：指令-2
                5'b00100: begin
                        instr <= instr - 2;
                        en    <= 0;
                         end
                //左：指令+1
                5'b00010: begin
                        instr <= instr + 1;
                        en    <= 0;
                         end
                //右：指令-1
                5'b00001: begin
                        instr <= instr - 1;
                        en    <= 0;
                         end
                default:en    <= 1;
                endcase
                end
        end
endmodule

