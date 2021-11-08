#include "main.h"

/**
 * get_funk - gets the fuctions according to the va_list
 * @format: format
 * @spec: specifier
 * @info: list
 * Return: The amount of arguments
 */
int get_funk(const char *format, print_s spec[], va_list info)
{
	int i, j, result, final_print;

	final_print = 0;
	for (i = 0; format[i] != '\0'; i++) /*Check every char of format*/
	{
		if (format[i] == '%') /*Searches for '%'*/
		{	/*Iterates through the list of funks*/
			for (j = 0; spec[j].name != NULL; j++)
			{	/*Compares the char next to '%' with the specs*/
				if (format[i + 1] == spec[j].name[0])
				{	result = spec[j].f(info);
					if (result == -1)
						return (-1);
					final_print += result;
					break;
				}
			}
			if (spec[j].name == NULL) /** Check for special cases */
			{
				if (format[i + 1] != ' ' && format[i + 1] != '\0')
				{
					_write(format[i]);
					_write(format[i + 1]);
					final_print += 2;
				}
				else
					return (-1);
			}
			i += 1;
		}
		else
		{
			/*print string if no '%' was input*/
			_write(format[i]);
			final_print++;
		}
	}
	return (final_print);
}
