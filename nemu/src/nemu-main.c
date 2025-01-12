/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <common.h>
#include "./monitor/sdb/sdb.h"

void test_expr() {
  int32_t EXPR ;
  int32_t TEST;
  bool success;
  FILE *fp = NULL;
  char *buf = NULL;
  size_t len = 0;
  ssize_t read ;

  fp = fopen("/home/furiosa/ysyx-workbench/nemu/tools/gen-expr/input","r");
  if(fp == NULL) perror("file open fail!\n");

  for(int i = 0;i<30;i++){
        if(fscanf(fp,"%u",&TEST) == -1)break;
	read = getline(&buf,&len,fp);
	buf[read-1] = '\0';

  EXPR = expr(buf,&success);

	assert(success);

  if( TEST != EXPR) {
     printf("wrong: expr = %s \nTEST =  %d, EXPR =  %d\n",buf,TEST,EXPR);
  } else {
     printf("right: expr = %s \nTEST =  %d, EXPR =  %d\n\n",buf,TEST,EXPR);
  }
  }

  fclose(fp);
  free(buf); 
}

void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif

  /* Start engine. */
  engine_start();

//  test_expr();

  return is_exit_status_bad();
}
