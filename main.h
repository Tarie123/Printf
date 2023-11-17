#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

void _putchar(char c);
int _printf(const char *format, ...);
int binary(int num);
int octal(int num);
int printf_decimal_specifier(va_list argumenst);
void print_int(int nunmber);
void process_d_i_specitfier(const char* format, va_list arguments);

#endif
