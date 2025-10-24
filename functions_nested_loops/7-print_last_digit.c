#include "main.h"

/**
* print_last_digit - Entry point
* @c: is int
* Return: last digit
*/

int print_last_digit(int c)
{
	int a;

	if (c < 0)
		c = -c;

	a = c % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
