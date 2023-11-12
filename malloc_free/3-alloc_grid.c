#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * @width: columns
 * @height: rows
 * Return: a pointer to a 2 dimensional
 */

int **alloc_grid(int width, int height)
{
	int **grid, row, col;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(width * sizeof(int));

		if (grid[row] == NULL)
		{
			while (row)
			{
				free(grid[row]);
				row--;
			}
			free(grid);
			return (NULL);
		}
		for (col = 0; col < width; col++)
			grid[row][col] = 0;
	}

	return (grid);
}
