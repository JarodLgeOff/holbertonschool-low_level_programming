#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer to first integer
 * @b: pointer to second integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
