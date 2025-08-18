
#ifndef __SDB_H__
#define __SDB_H__

#include "common.h"

uint32_t expr(char *e, bool *success);
int parse_args(int argc,char *grgv[]);
void sdb_mainloop();
void init_sdb();

#endif
