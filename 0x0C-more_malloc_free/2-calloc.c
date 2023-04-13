#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory of an arrary using malloc
 * @nmemb: The elements of the array.
 * @size: The byte number of each element.
 * Return: Pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int k;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < (nmemb * size); k++)
	{
		ptr[k] = 0;
	}
	return (ptr);

}

