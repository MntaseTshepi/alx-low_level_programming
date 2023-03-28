#include "main.h"

/**
 * puts_half - Function prints half of a string, followed by a new line
 * @str: String input
 *
 * Retur: void
 */

void puts_half(char *str)
{
	int len = 0;
	int i, n;

	while (str[len] != '\0')
	{
		len++;
	}

	n = (len - 1) / 2;

	if (len % 2 == 0)
	{
		for (i = (len / 2); i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = n + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

