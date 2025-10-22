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
		if (c != 9)
		{
			putchar(44);
			putchar(32);
		}
		c++;
	}
	putchar(10);

	return (0);
}
