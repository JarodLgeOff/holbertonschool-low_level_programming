#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: A pointer to the allocated 2D array, or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int w, h;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(sizeof(int) * width);
		if (grid[h] == NULL)
		{
			for ( ; h >= 0; h--)
			{
				free(grid[h]);
			}
			free(grid);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			grid[h][w] = 0;
		}
	}
	return (grid);
}
