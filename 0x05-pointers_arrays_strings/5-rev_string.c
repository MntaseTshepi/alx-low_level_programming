#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: The string input
 *
 * Return: string in reverse
 */

void rev_string(char *s)
{
	char rev[1000];
	int i, j, count;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	j = count - 1;

	for (i = 0; i < count; i++)
	{
		rev[i] = s[j];
		j--;
	}
	rev = rev;
}


