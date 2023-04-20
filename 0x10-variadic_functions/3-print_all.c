#include "variadic_functions.h"

/**
 * print_all - Function prints anything.
 * @format: List of the types of agruments passed.
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	char c;
	int i, idx = 0;
	float f;
	char *s;
	va_list args;

	va_start(args, format);

	while (format[idx] != '\0')
	{
		switch (format[idx])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (!s)
					printf("(nil)");
				printf("%s", s);
				break;
			default:
				idx++;
				continue;
		}
		idx++;
		if (format[idx] != '\0')
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
