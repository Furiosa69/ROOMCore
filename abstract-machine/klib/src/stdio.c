#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int sprintf(char *out, const char *fmt, ...) {
    va_list ap;
    int len;

    // 清空缓冲区
    for (len = 0; out[len]; len++) {
        out[len] = '\0';
    }

    va_start(ap, fmt);
    len = vsprintf(out, fmt, ap);
    va_end(ap);

    return len;
}
//int vsprintf(char *out, const char *fmt, va_list ap) {
//    int len = 0;
//
//    while (*fmt) {
//        if (*fmt == '%') {
//            fmt++; // 跳过 '%'
//            switch (*fmt) {
//                case 'd': {
//                    int value = va_arg(ap, int);
//                    char numstr[12]; // 足够存储32位整数的字符串
//                    char *p = numstr + 11; // 指向字符串末尾
//                    *p = '\0'; // 确保字符串以空字符结尾
//                    if (value < 0) {
//                        value = -value;
//                        *out++ = '-';
//                        len++;
//                    }
//                    // 特殊情况：如果 value 为 0，直接写入 '0'
//                    if (value == 0) {
//                        *--p = '0';
//                    } else {
//                        // 生成数字字符串
//                        do {
//                            *--p = '0' + (value % 10);
//                            value /= 10;
//                        } while (value);
//                    }
//                    // 复制数字字符串到输出缓冲区
//                    while (*p) {
//                        *out++ = *p++;
//                        len++;
//                    }
//                    break;
//                }
//                case 's': {
//                    char *str = va_arg(ap, char *);
//                    while (*str) {
//                        *out++ = *str++;
//                        len++;
//                    }
//                    break;
//                }
//                default:
//                    // 处理未知格式说明符
//                    *out++ = *fmt;
//                    len++;
//                    break;
//            }
//        } else {
//            *out++ = *fmt;
//            len++;
//        }
//        fmt++;
//    }
//    *out = '\0'; // 确保字符串以空字符结尾
//    return len;
//}

static char NUM_CHAR[] = "0123456789";

int vsprintf(char *out, const char *fmt, va_list ap) {
    int len = 0;
    char buf[128];
    int buf_len = 0;

    while (*fmt != '\0') {
        if (*fmt == '%') {
            fmt++; 
            switch (*fmt) {
                case 'd': {
                    int val = va_arg(ap, int); // 获取整数参数
                    if (val == 0) {
                        out[len++] = '0';
                    } else if (val < 0) {
                        out[len++] = '-';
                        val = -val;
                    }
                    // 将整数转换为字符串
                    for (buf_len = 0; val; val /= 10, buf_len++) {
                        buf[buf_len] = NUM_CHAR[val % 10];
                    }
                    // 复制字符串到输出缓冲区，反转
                    for (int i = buf_len - 1; i >= 0; i--) {
                        out[len++] = buf[i];
                    }
                    break;
                }
                case 's': {
                    char *s = va_arg(ap, char*); // 获取字符串参数
                    // 复制字符串到输出缓冲区
                    while (*s) {
                        out[len++] = *s++;
                    }
                    break;
                }
                default:
                    out[len++] = '%';
                    out[len++] = *fmt;
                    break;
            }
        } else {
            // 直接复制普通字符到输出缓冲区
            out[len++] = *fmt;
        }
        fmt++; // 移动到下一个字符
    }
    out[len] = '\0'; // 确保字符串以空字符结尾
    return len; // 返回写入的字符数
}




int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
