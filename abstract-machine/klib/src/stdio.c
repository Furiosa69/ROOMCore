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

//static char CHAR[] = "0123456789";

int vsprintf(char *out, const char *fmt, va_list ap) {
    int len = 0;
    char buf[128];
    int buf_len = 0;

    while (*fmt != '\0') {
        if (*fmt == '%') {
            fmt++; // 跳过 '%'
            switch (*fmt) {
                case 'd': { // 处理 %d（有符号十进制整数）
                    int val = va_arg(ap, int); 
                    if (val == 0) {
                        out[len++] = '0';
                    } else if (val < 0) {
                        out[len++] = '-';
                        val = -val;
                    }
                    for (buf_len = 0; val; val /= 10, buf_len++) {
                        buf[buf_len] = "0123456789"[val % 10];
                    }
                    for (int i = buf_len - 1; i >= 0; i--) {
                        out[len++] = buf[i];
                    }
                    break;
                }
                case 's': { // 处理 %s（字符串）
                    char *s = va_arg(ap, char*); 
                    while (*s) {
                        out[len++] = *s++;
                    }
                    break;
                }
                case 'l': { // 处理 %lx（64 位无符号十六进制整数）
                    if (*(fmt + 1) == 'x') {
                        fmt++; // 跳过 'l'
                        unsigned long val = va_arg(ap, unsigned long);
                        if (val == 0) {
                            out[len++] = '0';
                        } else {
                            for (buf_len = 0; val; val /= 16, buf_len++) {
                                buf[buf_len] = "0123456789abcdef"[val % 16];
                            }
                            for (int i = buf_len - 1; i >= 0; i--) {
                                out[len++] = buf[i];
                            }
                        }
                    } else {
                        // 如果不是 %lx，直接输出 %l
                        out[len++] = '%';
                        out[len++] = 'l';
                    }
                    break;
                }
                default: // 处理其他格式（如 %%）
                    out[len++] = '%';
                    out[len++] = *fmt;
                    break;
            }
        } else {
            out[len++] = *fmt; // 普通字符直接输出
        }
        fmt++; // 移动到下一个字符
    }
    out[len] = '\0'; // 添加字符串结束符
    return len; // 返回输出字符串的长度
}

//int vsprintf(char *out, const char *fmt, va_list ap) {
//    int len = 0;
//    char buf[128];
//    int buf_len = 0;
//
//    while (*fmt != '\0') {
//        if (*fmt == '%') {
//            fmt++; 
//            switch (*fmt) {
//                case 'd': {
//                    int val = va_arg(ap, int); 
//                    if (val == 0) {
//                        out[len++] = '0';
//                    } else if (val < 0) {
//                        out[len++] = '-';
//                        val = -val;
//                    }
//                    for (buf_len = 0; val; val /= 10, buf_len++) {
//                        buf[buf_len] = CHAR[val % 10];
//                    }
//                    for (int i = buf_len - 1; i >= 0; i--) {
//                        out[len++] = buf[i];
//                    }
//                    break;
//                }
//                case 's': {
//                    char *s = va_arg(ap, char*); 
//                    while (*s) {
//                        out[len++] = *s++;
//                    }
//                    break;
//                }
//                default:
//                    out[len++] = '%';
//                    out[len++] = *fmt;
//                    break;
//            }
//        } else {
//            out[len++] = *fmt;
//        }
//        fmt++; // 移动到下一个字符
//    }
//    out[len] = '\0'; 
//    return len; 
//}
//


int printf(const char *fmt, ...) {
    char buf[128]; 
    int len;

    va_list ap;
    va_start(ap, fmt);

    len = vsprintf(buf, fmt, ap);

    va_end(ap);

    for (int i = 0; i < len; i++) {
        putch(buf[i]); 
    }

    return len; 
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
