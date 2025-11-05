#include "main.h"

/**
 * _is_prime - Helper function to determine if n is prime
 * @n: The number to check
 * @d: The current divisor to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int _is_prime(int n, int d)
{
	if (d * d > n)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (_is_prime(n, d + 1));
}

/**
 * is_prime_number - Returns 1 if n is a prime number, otherwise 0
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_is_prime(n, 2));
}
