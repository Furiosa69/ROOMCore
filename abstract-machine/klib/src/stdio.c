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

static char CHAR[] = "0123456789";

int vsprintf(char *out, const char *fmt, va_list ap) {
    int len = 0;
    char buf[128];
    int buf_len = 0;

    while (*fmt != '\0') {
        if (*fmt == '%') {
            fmt++; 
            switch (*fmt) {
                case 'd': {
                    int val = va_arg(ap, int); 
                    if (val == 0) {
                        out[len++] = '0';
                    } else if (val < 0) {
                        out[len++] = '-';
                        val = -val;
                    }
                    for (buf_len = 0; val; val /= 10, buf_len++) {
                        buf[buf_len] = CHAR[val % 10];
                    }
                    for (int i = buf_len - 1; i >= 0; i--) {
                        out[len++] = buf[i];
                    }
                    break;
                }
                case 's': {
                    char *s = va_arg(ap, char*); 
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
            out[len++] = *fmt;
        }
        fmt++; // 移动到下一个字符
    }
    out[len] = '\0'; 
    return len; 
}



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
