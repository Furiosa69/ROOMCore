#include <am.h>
#include <klib-macros.h>

extern char _heap_start;
int main(const char *args);

extern char _pmem_start;
#define PMEM_SIZE (128 * 1024 * 1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
static const char mainargs[MAINARGS_MAX_LEN] = TOSTRING(MAINARGS_PLACEHOLDER);

void putch(char ch) {
    AM_UART_TX_T uart = { .data = ch };
    ioe_write(AM_UART_TX, &uart);
}

char getch() {
    AM_UART_RX_T uart;
    ioe_read(AM_UART_RX, &uart);
    return uart.data;
}

void trm_putstr(const char *str) {
    while (*str) {
        putch(*str++);
    }
}

void halt(int code) {
    asm volatile("ebreak");
    while (1);
}

void write_mvendorid(unsigned long value){
  asm volatile ("csrw 0xF11, %0" : : "r"(value));
}

void write_marchid(unsigned long value){
  asm volatile ("csrw 0xF12, %0" : : "r"(value));
}


void _trm_init() {
    ioe_init();

//	  write_mvendorid(0x79737978);
//	  write_marchid(0x16F6E92);

    trm_putstr("Starting main program...\n");

    int ret = main(mainargs);
    halt(ret);
}
