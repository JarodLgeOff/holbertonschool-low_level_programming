#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: pointer to string
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;

	}
	_putchar('\n');
}
