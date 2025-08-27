#include "common.h"
#include "utils/sdb.h"
#include "main.h"

#define CONFIG_FTRACE
#define CONFIG_MTRACE
#define CONFIG_RINGBUF
#define CONFIG_DIFFTEST

int main(int argc, char *argv[]) {
		printf("Command \n");
  	for (int i = 0; i < argc; i++)
  	{
    	printf(ANSI_FG_BLUE "arg %d: %s\n" ANSI_NONE,i,argv[i]);
  	}

		init_monitor(argc, argv);

		engine_start();

    sim_exit();
}
