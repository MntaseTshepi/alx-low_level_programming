#include "main.h"
#include "5-sqrt_recursion.c"

/**
 * is_prime_number - Checks if the input integer is a prime number
 * @n: The input integer.
 *
 * Return: 0 if @n is not a prime number or 1 if it is.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_num_func(n, 2));
}

/**
 * prime_num_func - Checks if num is divisible
 * @num: The number input
 * @div: The divisor.
 *
 * Return: 0 if @num is divisible or 1 if it is not.
 */

int prime_num_func(int num, int div)
{
	if ((num % div) == 0)
	{
		return (0);
	}
	if (div > _sqrt_recursion(num))
	{
		return (1);
	}

	return (prime_num_func(num, div + 1));
}
