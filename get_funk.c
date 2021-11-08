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
	/*Check every char of format*/
	for (i = 0; format[i] != '\0'; i++)
	{
		/*Searches for '%'*/
		if (format[i] == '%')
		{
			/*Iterates through the list of funks*/
			for (j = 0; spec[j].name != NULL; j++)
			{
				/*Compares the char next to '%' with the specs*/
				if (format[i + 1] == spec[j].name[0])
				{
					result = spec[j].f(info);
					if (result == -1)
					{
						return (-1);
					}
					final_print += result;
					break;
				}
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
