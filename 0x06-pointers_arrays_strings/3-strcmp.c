#include "main.h"

/**
 * _strcmp - Function compares two string values
 * @s1: First string input
 * @s2: Second string input
 * Return: The differenc between string 1 and 2
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}

		i++;
	}

	return (0);
}
