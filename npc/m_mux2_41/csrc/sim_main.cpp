#include "Vmux2_41.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <nvboard.h>

//VerilatedContext* contextp = NULL;
//VerilatedVcdC* tfp = NULL;

static TOP_NAME top;

void nvboard_bind_all_pins(TOP_NAME* top);

//void step_and_dump_wave(){
//	top->eval();
//	contextp->timeInc(1);
//	tfp->dump(contextp->time());
//}

void sim_init(){

	//NVBoard初始化
	nvboard_bind_all_pins(&top);
	nvboard_init();

	//仿真图像初始化
//	tfp = new VerilatedVcdC;
//	contextp = new VerilatedContext;
//	top = new Vmux2_41;
//	contextp->traceEverOn(true);
//	top->trace(tfp,0);
//	tfp->open("dump.vcd");
}

void sim_exit(){
	nvboard_quit();
	delete &top;
//	step_and_dump_wave();
//	tfp->close();
	exit(EXIT_SUCCESS);
}

int main(){
	sim_init();

	while(1){
	top.eval();
	nvboard_update();
	}

	sim_exit();
}

