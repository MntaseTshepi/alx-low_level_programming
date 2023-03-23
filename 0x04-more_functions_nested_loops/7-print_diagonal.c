#include "main.h"

/**
 * print_diagonal - Function draws a diagonal line on the terminal
 * @n: the number of time \ should be printed
 *
 */

void print_diagonal(int n)
{
	int i;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (space = 0; space < i - 1 + 1; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');

		}
	}
}
