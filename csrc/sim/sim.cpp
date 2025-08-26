#include "sim/sim.h"
#include "utils/sdb.h"
#include "utils/debug.h"
#include "common.h"
#include "utils/iringbuf.h"
#include "utils/ftrace.h"
#include "utils/difftest.h"

VerilatedContext* contextp ;
VerilatedVcdC* tfp ;
Vtop* top;
Vtop___024root* root;

RingBuffer  ringbuf;
CPU_state  cpu = {};

NEMUState nemu_state = { .state = NEMU_STOP };  

void wp_check();

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
}

void sim_exit(){
	end_ftrace();
  tfp->close(); 
  delete top;
  delete tfp;
  delete contextp;
  std::cout << " close vcd" << "\n";
  exit(EXIT_SUCCESS);
}

void set_nemu_state(int state, uint32_t pc, int halt_ret) {
	difftest_skip_ref();
  nemu_state.state = state;
  nemu_state.halt_pc = pc;
  nemu_state.halt_ret = halt_ret;
}

void NPCTRAP(uint32_t pc ,int halt_ret){
	set_nemu_state(NEMU_END,pc,halt_ret);
}

void clock_tick() {
    top->clk = !top->clk;
    step_and_dump_wave();
}

void rst_begin(){
    top->clk   = 0;
    top->reset   = 1;
		clock_tick();
		clock_tick();
		clock_tick();
		clock_tick();
    top->reset   = 0;
		clock_tick();
		clock_tick();

  	cpu.pc = root->top__DOT__ifu_pc;

		for(int i = 0; i<32 ; ++i){
			cpu.gpr[i] = GPR[i];
		}

		// Init begin
/*
	init_ringbuf(&ringbuf);
	init_ftrace();
*/

}

static int decode_exec(Decode *s){
	s->dnpc = PC;
	return 0;
}

int isa_exec_once(Decode *s){
	clock_tick();
	s->isa.inst.val = INST;
//	add_to_ringbuffer(&ringbuf,PC,INST);
	clock_tick();
	return decode_exec(s);
}

static void exec_once(Decode *s, uint32_t pc) {
  s->pc = pc;
  s->snpc = pc;
  isa_exec_once(s);
  cpu.pc = s->dnpc;
	for(int i = 0; i<32 ; ++i){
		cpu.gpr[i] = GPR[i];
	}
	// ------ ftrace --------
/*
	print_all_function_names(PC,DNPC,INST);
*/
}

static void execute(uint64_t n) {
	Decode s;
  for (;n > 0; n --) {
    exec_once(&s, cpu.pc);
		wp_check();
		difftest_step(PC,DNPC);
    if (nemu_state.state != NEMU_RUNNING) break;
  }
}

void cpu_exec(uint64_t n){
		switch (nemu_state.state) {
    case NEMU_END: case NEMU_ABORT:    
      printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
      return;
    default: nemu_state.state = NEMU_RUNNING;
  }

	execute(n);

switch (nemu_state.state) {
    case NEMU_RUNNING:
        nemu_state.state = NEMU_STOP;
        break;

    case NEMU_ABORT:
				printf("npc: %x at pc ABORT\n",nemu_state.halt_pc);
//				print_ringbuf(&ringbuf);
  			Verilated::gotFinish(true);
				break;
    case NEMU_END:
        if (nemu_state.halt_ret != 0) {
//					print_ringbuf(&ringbuf);
					printf("npc: %x at pc HIT BAD TRAP\n" ,nemu_state.halt_pc);
        } else {
					printf("npc: %x at pc HIT GOOD TRAP\n" ,nemu_state.halt_pc);
        }
  			Verilated::gotFinish(true);
				break;
    case NEMU_QUIT: 
  			Verilated::gotFinish(true);
				break;
  }
}

