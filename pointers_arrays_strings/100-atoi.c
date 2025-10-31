#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int sn = 1;
	unsigned int n = 0;

	while (*s && !(*s >= '0' && *s <= '9'))

	{
		if (*s == '-')
		{
			sn = -sn;
			s++;
		}

		else
		{
			s++;
		}
	}

	while (*s >= '0' && *s <= '9')
	{
		n = (n * 10) + (*s - '0');
		s++;
	}

	return (n * sn);
}
