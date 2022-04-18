#ifndef PRINTF_H
#define PRINTF_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct specifier
{
    char str;
    int (*func)(va_list *);

} fmt_spec;

int _printf(const char *format, ...);
int print_char(va_list *c);
int print_str(va_list *str);
int (*get_func(char s))(va_list *);
char *_revstr(char *str);
char *_itoa(int arg_int, char *strout, int base);
int _strlen(char *str);
int print_int(va_list *p_int);
int print_uint(va_list *p_int);
int print_hex(va_list *p_int);
int print_oct(va_list *p_int);

#endif