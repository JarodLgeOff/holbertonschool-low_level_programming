#include <stdio.h>
/**
* main - entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char c = 0;

	while (c < 10)
	{
		putchar('0' + c);
		c++;
	}
	c = 97;
	while (c < 103)
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
