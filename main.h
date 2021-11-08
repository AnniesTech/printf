#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <stdarg.h>

/**
  * struct my_printf  - struct for the _printf function
  * @name: the function
  * @f: function associated
  */

typedef struct my_printf
{
	char *name;
	int (*f)(va_list);
} print_s;

int _printf(const char *format, ...);
int _write(char c);
int _wrintenum(int num);
int get_funk(const char *format, print_s spec[], va_list info);
int format_char(va_list c);
int format_string(va_list s);
int format_percent(va_list percent);
int format_decimal(va_list num);

#endif
