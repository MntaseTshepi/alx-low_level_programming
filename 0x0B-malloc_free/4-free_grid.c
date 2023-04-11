#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function frees a 2 dimensional grid.
 * @grid: the address of the two dimensional grid.
 * @height: the height of the grid.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
