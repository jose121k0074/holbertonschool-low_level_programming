#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a grid
 * @grid: grid/array
 * @height: row
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
