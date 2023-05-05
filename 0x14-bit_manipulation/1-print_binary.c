#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: Integer input.
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, val_count = 0;
	unsigned long int bin;


	for (i = 63; i >= 0; i--)
	{
		bin = n >> i;

		if (bin & 1)
		{
			_putchar('1');
			val_count++;
		}
		else if (val_count)
		{
			_putchar ('0');
		}
	}
	if (!val_count)
	{
		_putchar('0');
	}

}
