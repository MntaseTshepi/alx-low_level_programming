#include "main.h"

/**
 * _strstr - Function that locates a substring.
 * @haystack: The string input to search.
 * @needle: The substring to search for in @haystack.
 *
 * Return: Pointer to beginning of located substring
 * or Null if substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *hs = haystack;
		char *nl = needle;

		while (*hs == *nl && *nl != '\0')
		{
			hs++;
			nl++;
		}
		if (*nl == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
