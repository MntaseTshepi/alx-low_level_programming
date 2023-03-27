#include "main.h"

/**
 * puts2 - prints out every second character in a string
 * @str: The string input
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int len = 0;
	char *y = str;

	while (*y != '\0')
	{
		len++;
		y++;
	}

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
