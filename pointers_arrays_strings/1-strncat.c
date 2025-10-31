#include "main.h"
/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes to concatenate from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	while (*ptr != '\0')
	{
		ptr++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*ptr = src[i];
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
