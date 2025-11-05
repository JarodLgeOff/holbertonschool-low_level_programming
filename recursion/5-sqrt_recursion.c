#include "main.h"
/**
 * _sqrt_helper - Helper function to find the natural square root recursively
 * @n: The number to find the square root of
 * @i: The current guess of the square root
 *
 * Return: The natural square root of n if found, otherwise -1
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n, or -1 if it does not exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
