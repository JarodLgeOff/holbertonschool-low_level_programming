#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array, or NULL on failure
 */

int *array_range(int min, int max)
{
	int i, len;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	len = max - min + 1;

	array = malloc(len * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
