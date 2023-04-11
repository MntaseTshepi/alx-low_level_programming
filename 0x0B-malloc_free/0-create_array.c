#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function creates an array of chars.
 * @size: The size of the array.
 * @c: Fills in the spaces allocated in the array.
 *
 * Return: Pointer to array or null if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *space;

	if (size == 0)
	{
		return (NULL);
	}
	space = (char *)malloc(size * sizeof(char));

	if (space == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		space[i] = c;
	}

	return (space);
}
