#include "variadic_functions.h"

/**
 * print_numbers - Function prints numbers, followed by a new line.
 * @n: The number of parameters inputted.
 * @separator: The string input that separates the values.
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
