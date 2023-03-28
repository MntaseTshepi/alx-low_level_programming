#include "main.h"

/**
 * _strcpy -Function copies the string pointed to by src
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] < '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
