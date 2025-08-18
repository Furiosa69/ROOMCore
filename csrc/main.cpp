#include "common.h"
#include "utils/sdb.h"
#include "main.h"


int main(int argc, char *argv[]) {
    Verilated::commandArgs(argc, argv);
		parse_args(argc,argv);

		std::string img= "/home/furiosa/riscv-cpu/bin/dummy-riscv32e-npc.bin" ;
		loadFileToMemory(img,memory, MEMORY_SIZE);

		printf("Command \n");
  	for (int i = 0; i < argc; i++)
  	{
    	printf(ANSI_FG_BLUE "arg %d: %s\n" ANSI_NONE,i,argv[i]);
  	}


    sim_init();

		rst_begin();

		init_sdb();

		// engine start
		sdb_mainloop();

    sim_exit();
}
