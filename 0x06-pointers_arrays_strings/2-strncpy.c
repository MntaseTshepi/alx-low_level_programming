#include "main.h"

/**
 * _strncpy - Function copies a string
 * @dest: Destination string input.
 * @src: Source string input.
 * @n: Number of characters to be copied.
 *
 * Return: Pointer to resulting dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
