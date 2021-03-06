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

	_printf("Case 1: int 0 [%i]\n", (int)0);
	printf("Case 1: int 0 [%i]\n", (int)0);

	_printf("Case 2: operations between min and max [%d + %d = %d]\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("Case 2: operations between min and max [%d + %d = %d]\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	
	len = _printf("%d", (int)0);
	printf("\n");
	printf("entre los dos\n");
	len2 = printf("%d", (int)0);
	printf("\n");

	_printf("%d\n", len);
	printf("%d\n", len2);

	len = _printf("Let's try to printf a simple sentence.\n");
        len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("%%i%\n");
	len2 = printf("%%i%\n");

	printf("Len:[%i]\n", len);
	printf("Len:[%i]\n", len2);

	len = _printf("%%i\n", 123);
	len2 = printf("%%i\n", 123);

	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	printf("Sin salto de línea:\n");

	len = _printf("%%i");
	printf("\n");

	len2 = printf("%%i");
	printf("\n");

	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("%i%");
	printf("\n");
	len2 = printf("%i%");
	printf("\n");

	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("%d\n", 000201);
	len2 = printf("%d\n", 000201);

	printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	len = _printf("%d\n", INT_MIN);
	len2 = printf("%d\n", INT_MIN);

	_printf("our Len:[%d]\n", len);
	printf("printf Len:[%d]\n", len2);

	return (0);
}
