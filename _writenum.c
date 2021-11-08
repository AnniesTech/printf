nclude "main.h"
#include <stdarg.h>

/**
    * format_decimal - prints decimal and ints
      * @num: number provided
        * Return: amount of chars added
	  */
int _writenum(int num)
{
	int i = 0, dec_chars = 0;
	char holder[1024];

	if (num == 0)
	{
		_write('0');
		return (dec_chars = 1);
	}
	if (num < 0)
	{
		_write('-');
		dec_chars += 1;
		num = num * -1;
	}
	for (; num >= 1; dec_chars++, i++)
	{
		holder[i] = ((num % 10) + 48);
		num = num / 10;
	}
	for (i = i - 1; i > -1; i--)
	{
		_write(holder[i]);
	}
	return (dec_chars);
}
