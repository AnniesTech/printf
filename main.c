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
	int hnum = 9, len, len2, i;

	for (i = 0; i < 999; i++)
		hnum = hnum * 99999;

/**	_printf("Case 1: ints as string:[%d]\n", "123"); ---- matches: none compiles
	printf("Case 1: ints as string:[%d]\n", "123"); ----- matches: none compiles */

	_printf("Case 2: int = 0 [%d]\n", 0);
	printf("Case 2: int = 0 [%d]\n", 0);

	_printf("Case 3: too many numbers[%d]\n", hnum);
	printf("Case 3: too many numbers[%d]\n", hnum);

	len = _printf("Case 4: length of this [%d]\n", 666);
	_printf("%d\n", len);
	len2 = printf("Case 4: lenght of this [%d]\n", 666);
	printf("%d\n", len2);

	_printf("Case 5: negative 0 [%d]\n", -0);
	printf("Case 5: negative 0 [%d]\n", -0);

	_printf("Case 6: several zeros [%d]\n", 000);
	printf("Case 6: several zeros [%d]\n", 000);

/**	_printf("Case 7: char in number [%d]\n", 1f23); ---- doesn't compile in either case
	printf("Case 7: char in number [%d]\n", 1f23); ----- doesn't compile in either case */

	_printf("Case 8: messed up func_spec [%dcs]\n", 123);
	printf("Case 8: messed up func_spec [%dcs]\n", 123);

/**	_printf("Case 9: d = NULL [%d]\n", NULL); ---- Matches: none compiles
	printf("Case 9: d = NULL [%d]\n", NULL); ----- Matches: none compiles */

	return (0);
}
