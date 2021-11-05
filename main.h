#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdarg.h>

typedef struct my_printf
{
    char *name;
    void (*f)(va_list);
}print_t;

int _printf(const char *format, ...);

#endif