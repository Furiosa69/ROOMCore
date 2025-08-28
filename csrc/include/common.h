#ifndef __COMMON_H__
#define __COMMON_H__

#include <iostream> // std::cout , std::endl
#include <iomanip>  // std::hex  , std::setw , std::setfill
#include <cstdint>  // uint32_t
#include <cstring>  // memcpy
#include "utils/color.h"  // color

#define TRACE_DIR "./trace/"

typedef uint16_t ioaddr_t;
#define PAGE_SHIFT        12
#define PAGE_SIZE         (1ul << PAGE_SHIFT)
#define PAGE_MASK         (PAGE_SIZE - 1)


#define Log(format, ...) \
    _Log(ANSI_FMT("[%s:%d %s] " format, ANSI_FG_BLUE) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

#endif
