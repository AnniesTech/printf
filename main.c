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
	int len = 0, len2 = 0;

	_printf("Case 1: int 0 [%d]\n", (int)0);
	printf("Case 1: int 0 [%d]\n", (int)0);

	_printf("Case 2: operations between min and max [%i + %i = %i]\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("Case 2: operations between min and max [%i + %i = %i]\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	
/**	len = _printf("%d");
	printf("\n");
	printf("entre los dos\n");
	len2 = printf("%d");
	printf("\n"); */

	_printf("%d\n", len);
	printf("%d\n", len2);

	return (0);
}
