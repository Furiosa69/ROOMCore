#include <am.h>

#define CLOCK_FREQ 50000000  // MHz
#define US_PER_SEC 1000000    // 1秒 = 1,000,000微秒

static inline uint64_t read_mcycle() {
    uint64_t cycles;
    asm volatile("csrr %0, mcycle" : "=r"(cycles));
    return cycles;
}

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
    uint64_t cycles = read_mcycle();
    // 微秒 = (周期数 * 微秒/秒) / 频率
    uptime->us = (cycles * US_PER_SEC) / CLOCK_FREQ;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
//    AM_TIMER_UPTIME_T uptime;
//    __am_timer_uptime(&uptime);
//    
//    uint64_t seconds = uptime.us / US_PER_SEC;
//    uint64_t days = seconds / (24 * 3600);
//    
//    rtc->year   = 2025;
//    rtc->month  = 1;
//    rtc->day    = 1 + days;
//    
//    uint64_t time_in_day = seconds % (24 * 3600);
//    rtc->hour   = time_in_day / 3600;
//    rtc->minute = (time_in_day % 3600) / 60;
//    rtc->second = time_in_day % 60;

    rtc->year   = 0;
    rtc->month  = 0;
    rtc->day    = 0;
    
    rtc->hour   = 0;
    rtc->minute = 0;
    rtc->second = 0;
}
