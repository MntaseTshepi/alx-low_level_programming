#include "main.h"

/**
 * _strchr - Function that locates a character in a string.
 * @s: The string input
 * @c: The character to be found in string s.
 *
 * Return: Pointer to first occurrence of c in string s or NULL if c not found.
 */

char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}

