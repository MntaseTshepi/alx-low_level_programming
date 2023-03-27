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
	int i;

	while (str[len] != '\0')
	{
		len++;
	}


	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
	}
	_putchar('\n');
}

