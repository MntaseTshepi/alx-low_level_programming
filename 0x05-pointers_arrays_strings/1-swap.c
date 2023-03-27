#include "main.h"

/**
 * swap_int - Function swaps the values of two integers
 * @a: The first integer
 * @b: The second integer
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
