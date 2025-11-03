#include "main.h"
#include "stdio.h"
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size) + i);
	}
	for (j = 0; j < size; j++)
	{
		sum2 += *(a + (j * size) + (size - 1 - j));
	}
	printf("%d, %d\n", sum1, sum2);
}
