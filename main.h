#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int andika(char c);
int print_string(const char *str);
int print_integer(int n);
int print_hex(unsigned int n, int uppercase);
int print_octal(unsigned int n);
int print_unsigned(unsigned int n);

#endif
