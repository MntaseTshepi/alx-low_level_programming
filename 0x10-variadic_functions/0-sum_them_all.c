#include "variadic_functions.h"

/**
 * sum_them_all - Function returns the sum of all the numbers
 * @n: N number of values inputted.
 * Return: Sum of the arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int count = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		count += va_arg(args, int);
	}
	va_end(args);
	return (count);
}
