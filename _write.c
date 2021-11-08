#include "main.h"
#include <unistd.h>

/**
 * _write - Functions that prints c in the stdout
 * @c: The char to print
 * Return: the function
 */

int _write(char c)
{
	return (write(1, &c, 1));
}
