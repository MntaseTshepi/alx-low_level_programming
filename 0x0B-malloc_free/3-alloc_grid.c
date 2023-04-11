#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function returns pointer to a 2d array of integers.
 * @width: width of the grid.
 * @height: height of the grid.
 *
 * Return: Pointer to 2d array or null if failure.
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int j, k;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	array = (int **)malloc(sizeof(int*) * height);

	if (array == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		array[j] = (int *)malloc(sizeof(int) * width);
		if (array[j] == NULL)
		{
			free(array);
			for (k = 0; k <= j; k++)
			{
				free(array[k]);
			}
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			array[j][k] = 0;
		}
	}
	return (array);
}

