#include "main.h"

/**
 * print_rev - Function that prints a string in reverse
 * @s: The string input
 *
 */

void print_rev(char *s)
{
	int len;
	int i;
	int j;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	j = len;

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
