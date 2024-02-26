#include "main.h"

/**
 * _strncat - Function that concatenates two strings using n bytes from src
 * @dest: First string input.
 * @src: Second string input
 * @n: Number of characters that will be used from src.
 * Return: Pointer to the resulting dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, c = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		c++;
	}

	for (i = c, j = 0; src[j] != '\0' && j < n; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
