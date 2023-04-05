#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number input.
 *
 * Return: -1 if @n is less than 0, 1 if @n is 0 or 1
 * or the factorial ofa given number.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
