#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: The string input
 *
 * Return: string in reverse
 */

void rev_string(char *s)
{
	int i, j, count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	j = count - 1;

	for (i = 0; i < j / 2 ; i++)
	{
		char tmp;

		tmp = s[i];
		s[i] = s[j - i];
		s[j - i] = tmp;
	}
}


