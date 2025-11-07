#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a, b, c;

		a = atoi(argv[1][0] == '-' ? argv[1] + 1 : argv[1]);
		if (argv[1][0] == '-')
			a = -a;
		b = atoi(argv[2][0] == '-' ? argv[2] + 1 : argv[2]);
		if (argv[2][0] == '-')
			b = -b;
		c = a * b;
		printf("%d\n", c);
		return (0);
	}
}
