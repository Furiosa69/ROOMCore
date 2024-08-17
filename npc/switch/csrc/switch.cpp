#include "Vswitch.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <nvboard.h>

//waveform
//define MAX_SIM_TIME 20 //仿真总时钟边沿数
//vluint64_t sim_time = 0;

//nvboard
static TOP_NAME dut;
void nvboard_bind_all_pins(TOP_NAME* dut);


int main(int argc,char** argv,char** env){
	//nvboard:绑定引脚且对NVBoard进行初始化
	nvboard_bind_all_pins(&dut);
	nvboard_init();


	//waveform:打开vsrc文件
//	VerilatedContext *contextp = new VerilatedContext;
//	contextp -> commandArgs(argc,argv);
//	Vswitch *dut = new Vswitch{contextp};
//	//waveform:设置波形储存为VCD文件
//	Verilated::traceEverOn(true);//打开追踪功能
//	VerilatedVcdC *m_trace = new VerilatedVcdC;
//	dut->trace(m_trace, 5);
//	m_trace->open("waveform.vcd");//设置输出文件


	//waveform:sim_time < MAX_SIM_TIME
	while(1){
		//waveform:添加随机输入ab
//		int a = rand() & 1;
//		int b = rand() & 1;
//		dut -> a = a;
//		dut -> b = b;

	        dut.eval();//更新电路状态
		nvboard_update();

//		//waveform
//		m_trace ->dump(sim_time);//将所有追踪信号写入文件内
//		printf("a = %d, b = %d, f = %d\n",a,b, dut -> f);
//		sim_time ++;
//		assert(dut -> f == ( a^b));
	}
	nvboard_quit();
//	m_trace ->close();
	delete  &dut;
 	exit(EXIT_SUCCESS);
	return 0;
}
