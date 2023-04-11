#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer which contains a copy of a given string.
 * @str: The string input.
 *
 * Return: Pointer to duplicated string or null if memory insufficient.
 */

char *_strdup(char *str)
{
	int count = 0;
	int i;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[count] != '\0')
	{
		count++;
	}

	s = (char *)malloc(count * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < count; i++)
	{
		s[i] = str[i];
	}

	return (s);
}


