#include "main.h"
#include <stdio.h>

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
		putchar(*str);
		str++;

	}
	putchar('\n');
}
