#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>

typedef struct {
        char *sp;
        int (*fun)(va_list);
}sp_t;

int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int (*get_printed_function(const char *format))(va_list);

#endif