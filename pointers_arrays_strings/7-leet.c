#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *str)
{
	char *rts = str;
	char LETTRE[] = "aAeEoOtTlL";
	char WITCH[] = "4433007711";
	int i;

	while (*rts)
	{
		for (i = 0; LETTRE[i]; i++)
		{
			if (*rts == LETTRE[i])
			{
				*rts = WITCH[i];
				break;
			}
		}
		rts++;
	}
	return (str);
}
