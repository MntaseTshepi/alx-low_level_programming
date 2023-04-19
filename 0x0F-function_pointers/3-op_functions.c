#include "3-calc.h"

/**
 * op_add - Function adds two values.
 * @a: First input.
 * @b: Second input.
 * Return: The sum of the two values.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function subtracts two values.
 * @a: The first value.
 * @b: The second value.
 * Return: The difference between two values.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function multiplies tow values
 * @a: The first value.
 * @b: The second value.
 * Return: The multiplication of two values.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function divides two values.
 * @a: The first value.
 * @b: The second value.
 * Return: The division of two values.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function uses modulo for two values
 * @a: The first value.
 * @b: The second value.
 * Return: The modulo of two values.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
