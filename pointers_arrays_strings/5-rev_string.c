#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */

void rev_string(char *s)
{
	int len = 0;
	char *start = s;
	char *end;
	char temp;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	end = start + len - 1;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
