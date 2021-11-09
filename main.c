#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
	_printf("%d\n", INT_MAX);
	printf("%d\n", INT_MAX);

    _printf("%d\n", INT_MIN);
    printf("%d\n", INT_MIN);
	return (0);
}
