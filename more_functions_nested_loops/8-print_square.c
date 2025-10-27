#include "main.h"

/**
 * print_square - not triangle, not circle
 * @size: that's what she said
 *
 * Return: 0
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = size; i > 0; i--)
		{
			for (j = size; j > 0; j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
