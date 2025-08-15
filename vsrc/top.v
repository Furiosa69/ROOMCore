import "DPI-C" function void npctrap();
import "DPI-C" function void pmem_write(input int addr, input int data, input int size);
import "DPI-C" function int  pmem_read(input int addr, input int size);

module top(
	input 			  clk,
	input 			  reset,
	input  [31:0] ifu_idu_inst,
	output [31:0] lsu_pc
);

//wire [1:0] pc_cnt; // 10 -> pc + 4, 01 -> pc + imm, 11 -> other
wire ifu_idu_valid,idu_ifu_ready;
wire idu_exu_valid,exu_idu_ready;
wire exu_mem_valid,mem_exu_ready;
wire mem_lsu_valid,lsu_mem_ready;
wire [31:0] ifu_pc,idu_pc,exu_pc,mem_pc;
wire [ 3:0] lsu_cnt;
wire        mem_cnt;
wire [ 3:0] alu_cnt;
wire [ 5:0] ins_cnt;
wire [ 3:0] pc_cnt;
wire [ 4:0] raddr1,raddr2,waddr;
wire [31:0] rdata1,rdata2,wdata;
wire [31:0] addr_load,addr_store;
wire [31:0] data_load,data_store;
wire [31:0] imm;
wire auipc,lui,ebreak,load;
assign data_store = rdata2;
assign addr_store = rdata1 + imm;
assign addr_load  = rdata1 + imm;

IFU ifu_t0(
	.clk(clk),
	.reset(reset),
	.pc_in(lsu_pc),
	.pc_out(ifu_pc),
	.ifu_idu_valid(ifu_idu_valid),
	.idu_ifu_ready(idu_ifu_ready)
);

IDU idu_t0(
	.clk(clk),
	.reset(reset),
	.pc_in(ifu_pc),
	.pc_out(idu_pc),
	.inst(ifu_idu_inst),
	.lsu_cnt(lsu_cnt),
	.mem_cnt(mem_cnt),
	.alu_cnt(alu_cnt),
	.ins_cnt(ins_cnt),
	.pc_cnt(pc_cnt),
	.auipc(auipc),
	.lui(lui),
	.ebreak(ebreak),
	.load(load),
	.rd(waddr),
	.rs1(raddr1),
	.rs2(raddr2),
	.imm(imm),
	.ifu_idu_valid(ifu_idu_valid),
	.idu_ifu_ready(idu_ifu_ready),
	.idu_exu_valid(idu_exu_valid),
	.exu_idu_ready(exu_idu_ready)
);

EXU exu_t0(
	.clk(clk),
	.reset(reset),
	.pc_in(idu_pc),
	.pc_out(exu_pc),
	.pc_cnt(pc_cnt),
	.alu_cnt(alu_cnt),
	.ins_cnt(ins_cnt),
	.auipc(auipc),
	.lui(lui),
	.ebreak(ebreak),
	.load(load),
	.imm(imm),
	.alu_result(wdata),
	.rdata1(rdata1),
	.rdata2(rdata2),
	.data_load(data_load),
	.idu_exu_valid(idu_exu_valid),
	.exu_idu_ready(exu_idu_ready),
	.exu_mem_valid(exu_mem_valid),
	.mem_exu_ready(mem_exu_ready)
);

MEM mem_t0(
	.clk(clk),
	.reset(reset),
	.pc_in(exu_pc),
	.pc_out(mem_pc),
	.mem_cnt(mem_cnt),
	.raddr1(raddr1),
	.raddr2(raddr2),
	.rdata1(rdata1),
	.rdata2(rdata2),
	.waddr(waddr),
	.wdata(wdata),
	.exu_mem_valid(exu_mem_valid),
	.mem_exu_ready(mem_exu_ready),
	.mem_lsu_valid(mem_lsu_valid),
	.lsu_mem_ready(lsu_mem_ready)
);

LSU lsu_t0(
	.clk(clk),
	.reset(reset),
	.pc_in(mem_pc),
	.pc_out(lsu_pc),
	.lsu_cnt(lsu_cnt),
	.data_load(data_load),
	.data_store(data_store),
	.addr_load(addr_load),
	.addr_store(addr_store),
	.mem_lsu_valid(mem_lsu_valid),
	.lsu_mem_ready(lsu_mem_ready)
);


endmodule

	
