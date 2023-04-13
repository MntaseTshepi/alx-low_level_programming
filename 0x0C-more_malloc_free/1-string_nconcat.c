#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function concatenates two strings.
 * @s1: The fist string input.
 * @s2: The second string input.
 * @n: n bytes of string @s2 to be included.
 * Return: Pointer to concatenated string or null if failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *s;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	s = (char *)malloc((len1 + n) * sizeof(char) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (i = len1, j = 0; j < n; i++, j++)
	{
		s[i] = s2[j];
	}
	s[i] = '\0';
	return (s);
}
