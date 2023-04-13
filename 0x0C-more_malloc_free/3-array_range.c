#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum input value.
 * @max: The maximum input value.
 * Return: Pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i;
	int *val;

	if (min > max)
	{
		return (NULL);
	}

	val = malloc((max - min + min) * sizeof(int *) + 1);

	if (val == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		val[i] = min;
	}

	return (val);
}
