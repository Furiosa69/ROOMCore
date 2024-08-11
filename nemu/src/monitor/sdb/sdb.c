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

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include "memory/vaddr.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
void test_expr();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_help(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);
static int cmd_p(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si","Continue the execution in N steps,default 1",cmd_si },
  { "info","Display the info of registers & watchpoints",cmd_info },
  { "x","Usage: x N EXPR, Scan the memory from EXPR by N bytes",cmd_x},
  { "p","Usage: p EXPR, Calcalate the expression, e.g. p $eax + 1",cmd_p}

  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_p(char *args){
  bool success;
  word_t res = expr(args,&success);
  if(!success) {
	printf("invalid expression");
  } else {
	printf("%u\n",res);
  }
  return 0;
}

static int cmd_si(char *args){
  char *arg = strtok(NULL," ");
  int n;

  if(arg == NULL) {
	n = 1;
  } else {
	n = strtol(arg,NULL,10);
  }
 
  cpu_exec(n);
  return 0;
}

static int cmd_info(char *args){
  char *arg = strtok(NULL," ");

  if(arg == NULL) {
	printf("Usage: info r(registers) or info w(watchpoints)\n");
  } else {
	if(strcmp(arg,"r")==0) {
		isa_reg_display();
	} else if(strcmp(arg,"w")==0) {
		//i don't konw
	} else {
		printf("Usage: info r(registers) or info w(watchpoints)\n");
	}
  }
 
  return 0;
}

static int cmd_x(char *args) {

  int len;
  vaddr_t addr;
  sscanf(args,"%d %x",&len,&addr);

  int i,j;
  for(i = 0;i<len;){
	  printf(ANSI_FMT("%#010x: ",ANSI_FG_BLUE),addr);
  
	  for(j = 0;i<len&&j<5;j++,i++){
		word_t data = vaddr_read(addr,4);
		addr += 4;
		printf("%#010x ",data);
  }
  puts("");
  }
  return 0;
}

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

//void test_expr() {
//  word_t expr_res;
//  word_t syst_res;
//  bool ready = false;
//  size_t len = 0;
//  ssize_t read;
//
//  FILE *fp = fopen("~/ysyx-workench/nemu/tools/gen-expr/input","r");
//  if(fp == NULL) perror("fail to open file!\n");
//
//  char *buf = NULL;
//
//  while(true) {
//	if(fscanf(fp,"%u ",&syst_res) == -1) break;
//	read = getline(&buf,&len,fp);
//	buf[read-1] = '\0';
//
//	expr_res = expr(buf,&ready);
//	
//	if(syst_res != expr_res) {
//		puts(buf);
//		printf("syst_res: %u, expr_res: %u\n",syst_res,expr_res);
//		assert(0);
//	}
//  }
//	
//
//  fclose(fp);
//  if(buf) free(buf);
//  Log("expr text success");
//}
//
//
#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) {
		 return;
	 }

        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();
  
//  test_expr();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
		
