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
#include <memory/host.h>
#include <memory/vaddr.h>
#include <device/map.h>
#include <time.h>

#define IO_SPACE_MAX (2 * 1024 * 1024)

static uint8_t *io_space = NULL;
static uint8_t *p_space = NULL;


static FILE *dtlog_file = NULL;

void dtrace_init_log() {
  // 打开日志文件（按时间戳命名）
  char log_filename[64];
  time_t now = time(NULL);
  strftime(log_filename, sizeof(log_filename), "device_trace_%Y%m%d_%H%M%S.log", localtime(&now));
  dtlog_file = fopen(log_filename, "w");
  if (dtlog_file == NULL) {
    printf("Failed to open log file!\n");
    return;
  }
  fprintf(dtlog_file, "Device Trace Log\n");
  fprintf(dtlog_file, "================\n");
}

void close_dtrace_log() {
  if (dtlog_file) {
    fclose(dtlog_file);
    dtlog_file = NULL;
  }
}

uint8_t* new_space(int size) {
  uint8_t *p = p_space;
  // page aligned;
  size = (size + (PAGE_SIZE - 1)) & ~PAGE_MASK;
  p_space += size;
  assert(p_space - io_space < IO_SPACE_MAX);
  return p;
}

static void check_bound(IOMap *map, paddr_t addr) {
  if (map == NULL) {
    Assert(map != NULL, "address (" FMT_PADDR ") is out of bound at pc = " FMT_WORD, addr, cpu.pc);
  } else {
    Assert(addr <= map->high && addr >= map->low,
        "address (" FMT_PADDR ") is out of bound {%s} [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
        addr, map->name, map->low, map->high, cpu.pc);
  }
}

static void invoke_callback(io_callback_t c, paddr_t offset, int len, bool is_write) {
  if (c != NULL) { c(offset, len, is_write); }
}

void init_map() {
  io_space = malloc(IO_SPACE_MAX);
  assert(io_space);
  p_space = io_space;
	
#ifdef CONFIG_DTRACE_COND
	dtrace_init_log();
#endif
}

word_t map_read(paddr_t addr, int len, IOMap *map) {
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);
  paddr_t offset = addr - map->low;
  invoke_callback(map->callback, offset, len, false); // prepare data to read

	// 记录读操作
  if (dtlog_file) {
    fprintf(dtlog_file, "[READ]  Device: %-10s  Addr: 0x%08x  Offset: 0x%08x  Len: %d\n",
            map->name, addr, offset, len);
  }

  word_t ret = host_read(map->space + offset, len);
  return ret;
}

void map_write(paddr_t addr, int len, word_t data, IOMap *map) {
  assert(len >= 1 && len <= 8);
  check_bound(map, addr);
  paddr_t offset = addr - map->low;

	// 记录写操作
  if (dtlog_file) {
    fprintf(dtlog_file, "[WRITE]  Device: %-10s  Addr: 0x%08x  Offset: 0x%08x  Len: %d\n",
            map->name, addr, offset, len);
  }

  host_write(map->space + offset, len, data);
  invoke_callback(map->callback, offset, len, true);
}
