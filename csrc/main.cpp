#include "common.h"
#include "main.h"

int main(int argc, char *argv[]) {
    Verilated::commandArgs(argc, argv);

		printf("Command \n");
  	for (int i = 0; i < argc; i++)
  	{
    	printf( BLUE "arg %d: %s\n" NONE ,i,argv[i]);
  	}

    sim_init();

		std::string img= "/home/furiosa/riscv-cpu/bin/dummy-riscv32e-npc.bin" ;
		loadFileToMemory(img,memory, MEMORY_SIZE);

		rst_begin();

    while (!Verilated::gotFinish() && contextp->time() < 100) {
			read_1inst();
    }

    sim_exit();
}
