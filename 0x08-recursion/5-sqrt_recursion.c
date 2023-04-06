#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number input.
 *
 * Return: -1 if @n has no natural square root.
 *         or the natural square root of @n.
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_func(n, 1));
	}
}

/**
 * sqrt_func - Finds the natural square root of the number input.
 * @num: The number input.
 * @val: The root value that will be tested.
 *
 * Return: -1 if @num has not natural square root.
 *         or the natural square root of @num.
 */

int sqrt_func(int num, int val)
{
	if ((val * val) == num)
	{
		return (val);
	}
	else if (val >= num / 2)
	{
		return (-1);
	}
	else
	{
		return (sqrt_func(num, val + 1));
	}
}
