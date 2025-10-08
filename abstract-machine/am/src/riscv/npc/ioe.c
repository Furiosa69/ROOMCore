#include <am.h>
#include <klib-macros.h>
#include <fcntl.h>

// UART 16550 寄存器定义
#define UART_BASE 0x10000000

#define UART_REG_RB   0   // 接收缓冲区
#define UART_REG_TR   0   // 发送保持寄存器
#define UART_REG_IE   1   // 中断使能寄存器
#define UART_REG_FC   2   // FIFO控制寄存器
#define UART_REG_LC   3   // 线路控制寄存器
#define UART_REG_LS   5   // 线路状态寄存器
#define UART_REG_DL1  0   // 分频锁存器低字节（DLAB=1时）
#define UART_REG_DL2  1   // 分频锁存器高字节（DLAB=1时）

#define UART_LC_DL    (1 << 7)   

static inline void outb(uintptr_t addr, uint8_t data) {
    *(volatile uint8_t *)addr = data;
}

static inline uint8_t inb(uintptr_t addr) {
    return *(volatile uint8_t *)addr;
}

void __am_timer_init();

void __am_uart_init() {
    // 设置波特率 - 115200
    outb(UART_BASE + UART_REG_LC, 0x80); // 设置DLAB=1
    outb(UART_BASE + UART_REG_DL1, 0x01); // 分频低字节
    outb(UART_BASE + UART_REG_DL2, 0x00); // 分频高字节
    
    outb(UART_BASE + UART_REG_LC, 0x03); // 8N1，DLAB=0
    
    outb(UART_BASE + UART_REG_FC, 0xC7); 
    
    outb(UART_BASE + UART_REG_IE, 0x01);
}

void __am_timer_rtc(AM_TIMER_RTC_T *);
void __am_timer_uptime(AM_TIMER_UPTIME_T *);
void __am_input_keybrd(AM_INPUT_KEYBRD_T *);

static void __am_timer_config(AM_TIMER_CONFIG_T *cfg) { 
    cfg->present = true; 
    cfg->has_rtc = true; 
}

static void __am_input_config(AM_INPUT_CONFIG_T *cfg) { 
    cfg->present = true;  
}

static void __am_uart_config(AM_UART_CONFIG_T *cfg) {  
    cfg->present = true;  
}

static void __am_uart_tx(AM_UART_TX_T *uart) {
    while ((inb(UART_BASE + UART_REG_LS) & (1 << 5)) == 0) {
        // 忙等待
    }
    outb(UART_BASE + UART_REG_TR, uart->data);
}

static void __am_uart_rx(AM_UART_RX_T *uart) {
    if (inb(UART_BASE + UART_REG_LS) & 0x01) {
        uart->data = inb(UART_BASE + UART_REG_RB);
    } else {
        uart->data = 0;  
    }
}

typedef void (*handler_t)(void *buf);
static void *lut[128] = {
  [AM_TIMER_CONFIG] = __am_timer_config,
  [AM_TIMER_RTC   ] = __am_timer_rtc,
  [AM_TIMER_UPTIME] = __am_timer_uptime,
  [AM_INPUT_CONFIG] = __am_input_config,
  [AM_INPUT_KEYBRD] = __am_input_keybrd,
  [AM_UART_CONFIG]  = __am_uart_config,
  [AM_UART_TX     ] = __am_uart_tx,
  [AM_UART_RX     ] = __am_uart_rx,
};

static void fail(void *buf) { 
    panic("access nonexist register"); 
}

bool ioe_init() {
    for (int i = 0; i < LENGTH(lut); i++) {
        if (!lut[i]) lut[i] = fail;
    }
    __am_timer_init();
    __am_uart_init();
    return true;
}

void ioe_read(int reg, void *buf) { 
    ((handler_t)lut[reg])(buf); 
}

void ioe_write(int reg, void *buf) { 
    ((handler_t)lut[reg])(buf); 
}
