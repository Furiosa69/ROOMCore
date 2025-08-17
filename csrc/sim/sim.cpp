#include "sim/sim.h"
#include "utils/debug.h"
#include "common.h"
#include "utils/iringbuf.h"
#include "Vtop___024root.h"

VerilatedContext* contextp ;
VerilatedVcdC* tfp ;
Vtop* top;
Vtop___024root* root;

RingBuffer  ringbuf;

#define  PC  root->top__DOT__ifu_pc
#define  INST root->top__DOT__inst

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

void sim_init(){
  tfp = new VerilatedVcdC;
  contextp = new VerilatedContext;
  top = new Vtop;
	root = top->rootp;
  contextp -> traceEverOn(true);
  top ->trace(tfp,99);
  tfp ->open("wave.vcd");

	// -------------- iringbuf init -----------------
	init_disasm("riscv32-pc-linux-gnu");
	init_ringbuf(&ringbuf);
}

void sim_exit(){
  tfp->close(); 
  delete top;
  delete tfp;
  delete contextp;
  std::cout << " close vcd" << "\n";
  exit(EXIT_SUCCESS);
}

void NPCTRAP(int pc,int x10){

	print_ringbuf(&ringbuf);

	// ------------------------------------------------------------
	if(x10 == 0){
		printf(ANSI_FG_GREEN "HIT GOOD TRAP at %08x\n" ANSI_NONE,pc);
	}else{
		printf(ANSI_FG_RED "HIT BAD TRAP at %08x\n" ANSI_NONE,pc);
	}

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
    step_and_dump_wave();
    
    top->clk = !top->clk;
    step_and_dump_wave();
}

void read_1inst(){
    top->clk = !top->clk;
    step_and_dump_wave();

		add_to_ringbuffer(&ringbuf,PC,INST);

    top->clk = !top->clk;
    step_and_dump_wave();
}                
