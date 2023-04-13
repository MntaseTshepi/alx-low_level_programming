#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function allocates using malloc.
 * @b: The number of bytes of allocated memory.
 *
 * Return: Pointer to allocated memory or null if fail.
 */

void *malloc_checked(unsigned int b)
{
	int *val;

	val = malloc(b);

	if (val == NULL)
	{
		exit(98);
	}

	return (val);
}
