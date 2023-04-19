#include "function_pointers.h"

/**
 * int_index - Function thats searches for an integer.
 * @array: Pointer to an array
 * @size: The size of the array.
 * @cmp: Pointer to function.
 *
 * Return: index on success or -1 on failure.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
