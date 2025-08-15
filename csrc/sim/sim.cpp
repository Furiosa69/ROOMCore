#include "sim/sim.h"
#include "common.h"

VerilatedContext* contextp ;
VerilatedVcdC* tfp ;
Vtop* top;

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
  top ->trace(tfp,99);
  tfp->open("wave.vcd");
}

void sim_exit(){
  tfp->close(); 
  delete top;
  delete tfp;
  delete contextp;
  std::cout << " close vcd" << "\n";
  exit(EXIT_SUCCESS);
}

void npctrap(){
  Verilated::gotFinish(true);
}

void clock_tick() {
    top->clk = !top->clk;
    step_and_dump_wave();
}

void rst_begin(){
    top->clk   = 0;

    top->reset   = 1;
    top->clk   = !top->clk;
    step_and_dump_wave();

    top->clk   = !top->clk;
    step_and_dump_wave();

    top->clk   = !top->clk;
    step_and_dump_wave();

    top->clk   = !top->clk;
    step_and_dump_wave();

    top->reset   = 0;
    top->clk   = !top->clk;
    top->ifu_idu_inst = pmem_read(top->lsu_pc, 4);
    step_and_dump_wave();
    
    top->clk = !top->clk;
    step_and_dump_wave();
}

void read_1inst(){
    top->clk = !top->clk;
    top->ifu_idu_inst = pmem_read(top->lsu_pc, 4);
    step_and_dump_wave();

    top->clk = !top->clk;
    step_and_dump_wave();
}                
