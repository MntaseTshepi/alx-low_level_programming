#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings.
 * @s1: The first string input.
 * @s2: The second string input.
 *
 * Return: Pointer to concatenated string or null on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int c1, c2, sum_count, i, j;
	char *s;

	c1 = 0;
	c2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[c1] != '\0')
	{
		c1++;
	}
	while (s2[c2] != '\0')
	{
		c2++;
	}

	sum_count = c1 + c2;
	s = (char *)malloc(sum_count * sizeof(char) + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < c1; i++)
	{
		s[i] = s1[i];
	}
	for (i = c1, j = 0; j < c2; i++, j++)
	{
		s[i] = s2[j];
	}
	s[i] = '\0';
	return (s);
}

