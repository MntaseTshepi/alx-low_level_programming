#include "main.h"

/**
 * _strcat - Function concatenates two strings.
 * @dest: First string input.
 * @src: Second string input.
 * Return: Pointer to the resulting dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j, c = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		c++;
	}

	for (i = c, j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

