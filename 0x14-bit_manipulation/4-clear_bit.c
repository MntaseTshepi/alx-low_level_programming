#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: Pointer to value input
 * @index: Index of bit to set
 * Return: 1 if successful or -1 if error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1ul << index);
	return (1);
}
