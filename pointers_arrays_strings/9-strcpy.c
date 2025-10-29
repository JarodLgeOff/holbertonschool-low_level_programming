#include "main.h"


/**
 * _strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to destination buffer
 * @src: pointer to source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while ((*ptr++ = *src++))
		;
	*ptr = '\0';
	return (dest);
}
