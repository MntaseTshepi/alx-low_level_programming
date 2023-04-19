#include "function_pointers.h"

/**
 * array_iterator - Function given as a parameter on each element of an array.
 * @array: Array parameter.
 * @size: Size of the array.
 * @action: Pointer to function.
 *
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
