#include <stdio.h>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "assert.h"
#include "Vtop.h"
#include <iostream>
#include <vector>

std::vector<uint8_t> pmem;


static const uint32_t ins[] = {
	0b000000000000_00000_000_00000_0010011,//rs = 0, imm = 0
	0b000000000011_00000_000_00000_0010011,//rs = 0, imm = 3

// DPI-C write
int pmem_read(int addr) {
  if (addr >= 0 && addr < pmem.size()) {
    return pmem[addr];
  } else {
    std::cerr << "Error : Out-of-bounds memory access at address " << addr << std::endl;
    return -1;  // 返回错误值
  }
}

void init_pmem(size_t size) {
  pmem.resize(size, 0);  // 用 0 填充存储器
}

	
//----------------------------------------------------------------

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtop* top;

void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}

void sim_init(){
	tfp = new VerilatedVcdC;
	contextp = new VerilatedContext;
	top = new Vtop;
	contextp -> traceEverOn(true);
	top->trace(tfp,0);
	tfp->open("dump.vcd");
}

void sim_exit(){
	step_and_dump_wave();
	tfp->close();
	delete top;
	delete tfp;
	delete contextp;
	exit(EXIT_SUCCESS);
}

int main(){
		init_pmem(1024);
		sim_init();
		//eddi
		while(contextp -> time() < 1000){
			top -> clk = 0b0;step_and_dump_wave();
			top -> clk = 0b1;step_and_dump_wave();
		}
	
	  sim_exit();
}
