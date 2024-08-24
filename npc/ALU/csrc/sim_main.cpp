#include"Vtop.h"
#include"verilated.h"
#include<nvboard.h>
#include<assert.h>

static TOP_NAME dut;

void nvboard_bind_all_pins(TOP_NAME* dut);

int main(){

	//绑定引脚
	nvboard_bind_all_pins(&dut);
	//初始化NVBoard
	nvboard_init();


	while(1)
{
	dut.eval();//更新数据
	nvboard_update();
}
	
	nvboard_quit();
	delete &dut;
	
	exit(EXIT_SUCCESS);
}	
