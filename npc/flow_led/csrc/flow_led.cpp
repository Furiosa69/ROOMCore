#include"Vflow_led.h"
#include"verilated.h"
#include<nvboard.h>
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

static TOP_NAME dut;

static void single_cycle(){
	dut.clk = 0;dut.eval();
	dut.clk = 1;dut.eval();
}

static void reset(int n){
	dut.rst = 1;
	while (n-- > 0) single_cycle();
	dut.rst = 0;
}

void nvboard_bind_all_pins(TOP_NAME* dut);

int main(int argc,char** argv,char** env){

	//绑定引脚
	nvboard_bind_all_pins(&dut);
	//初始化NVBoard
	nvboard_init();

	reset(10);//复位10个周期

	while(1)
{
	single_cycle();
	nvboard_update();
}
	
	nvboard_quit();
	delete &dut;
	
	exit(EXIT_SUCCESS);
}	
