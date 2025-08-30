#include "sim/sim.h"
#include "utils/sdb.h"
#include "utils/debug.h"
#include "common.h"
#include "macro.h"
#include "utils/iringbuf.h"
#include "utils/ftrace.h"
#include "mem/memory.h"
#include "utils/difftest.h"
#include "main.h"

VerilatedContext* contextp ;
VerilatedVcdC* tfp ;
Vtop* top;
Vtop___024root* root;

IFONE(CONFIG_RINGBUFF,
	RingBuffer  ringbuf;
)
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

	IFONE(CONFIG_WAVE,
  	top ->trace(tfp,99);
  	tfp ->open("wave.vcd");
	)
}

void set_nemu_state(int state, uint32_t pc, int halt_ret) {

	IFONE(CONFIG_DIFFTEST,
		difftest_skip_ref();
	)

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
		cpu.csr[0] = MCAUSE;
		cpu.csr[1] = MTVEC ;
		cpu.csr[2] = MEPC  ;
		cpu.csr[3] = MSTATUS;

		// Init begin
		IFONE(CONFIG_RINGBUFF,
			init_ringbuf(&ringbuf);
		)
		IFONE(CONFIG_FTRACE,
			init_ftrace();
		)
}

static int decode_exec(Decode *s){
	s->dnpc = PC;
	return 0;
}

int isa_exec_once(Decode *s){
	clock_tick();
	s->isa.inst.val = INST;

	IFONE(CONFIG_RINGBUFF,
		add_to_ringbuffer(&ringbuf,PC,INST);
	)

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
		cpu.csr[0] = MCAUSE;
		cpu.csr[1] = MTVEC ;
		cpu.csr[2] = MEPC  ;
		cpu.csr[3] = MSTATUS;

	IFONE(CONFIG_FTRACE,
		print_all_function_names(PC,DNPC,INST);
	)
	IFONE(CONFIG_ETRACE,
		if(CSR_cnt != 0){
			printf("mcause %x | mtvec %x | mepc %x | mstatus %x \n",MCAUSE,MTVEC,MEPC,MSTATUS);
		}
	)
}

static void execute(uint64_t n) {
	Decode s;
  for (;n > 0; n --) {

    exec_once(&s, cpu.pc);

		IFONE(CONFIG_WATCHPOINT,
			wp_check();
		)

		IFONE(CONFIG_DIFFTEST,
	  	difftest_step(PC,DNPC);
		)

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
					IFONE(CONFIG_RINGBUFF,
						print_ringbuf(&ringbuf);
					)
					printf(ANSI_FG_RED "NPC: At pc %x ABORT\n" ANSI_NONE,nemu_state.halt_pc);
					break;
	    case NEMU_END:
	        if (nemu_state.halt_ret != 0) {
						IFONE(CONFIG_RINGBUFF,
							print_ringbuf(&ringbuf);
						)
						printf(ANSI_FG_RED "NPC: At pc %x HIT BAD TRAP\n" ANSI_NONE ,nemu_state.halt_pc);
	        } else {
						printf(ANSI_FG_GREEN "NPC: At pc %x HIT GOOD TRAP\n" ANSI_NONE,nemu_state.halt_pc);
	        }
					break;
	    case NEMU_QUIT: 
					break;
	  }
}

int is_exit_status_bad() {   
  int good = (nemu_state.state == NEMU_END && nemu_state.halt_ret == 0) || (nemu_state.state == NEMU_QUIT);

	IFONE(CONFIG_FTRACE,
		end_ftrace();
	)

	IFONE(CONFIG_MTRACE,
		close_mtracelog_file();
	)

  tfp->close(); 
  delete top;
  delete tfp;
  delete contextp;

  return !good;
}

