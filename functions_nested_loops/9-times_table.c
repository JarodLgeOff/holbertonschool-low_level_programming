#include "main.h"

/**
 * times_table - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
	char i;
	char j;
	char k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = i * j;

			if (j == 0)
			{
				_putchar('0' + k);
			}
			else if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + k);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (k / 10));
				_putchar('0' + (k % 10));
			}
		}
		_putchar('\n');
	}
}
