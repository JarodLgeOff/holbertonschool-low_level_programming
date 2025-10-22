#include <stdio.h>

/**
* main - entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	short int c = 0;

	while (c < 10)
	{
		putchar('0' + c);
		c++;
	}
	putchar(10);

	return (0);
}
