#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Integer input
 * @index: Index parameter
 * Return: Value of bit at index or -1 if error ocurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
