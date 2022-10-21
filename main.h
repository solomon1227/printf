#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <unistd.h>
/**
  * struct specifier - struct
  * @sp: specifier
  * @fun: associating function
  */
typedef struct specifier
{
	char *sp;
	int (*fun)(va_list);
} sp_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_int(va_list);
int print_binary(va_list);
int (*get_printed_function(const char *format))(va_list);
int print_x(va_list);
int print_X(va_list);
int print_hex(unsigned int, unsigned int)

#endif
