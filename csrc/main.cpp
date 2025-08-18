#include "common.h"
#include "utils/sdb.h"
#include "main.h"

int main(int argc, char *argv[]) {
		parse_args(argc,argv);

		printf("Command \n");
  	for (int i = 0; i < argc; i++)
  	{
    	printf(ANSI_FG_BLUE "arg %d: %s\n" ANSI_NONE,i,argv[i]);
  	}

    sim_init();

		rst_begin();

		init_sdb();

		sdb_mainloop();

    sim_exit();
}
