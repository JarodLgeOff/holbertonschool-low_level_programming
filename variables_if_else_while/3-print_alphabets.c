#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char c =  'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	char C = 'A';

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
