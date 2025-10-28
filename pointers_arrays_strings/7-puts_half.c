#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int start;

	while (str[len] != '\0')
		len++;

	start = (len + 1) / 2;

	while (start < len)
	{
		_putchar(str[start]);
		start++;
	}

	_putchar('\n');
}
