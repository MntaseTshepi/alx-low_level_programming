#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: Pointer to integer input
 * @index: Index of bit to set
 * Return: 1 if successful or -1 if error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n | (1ul << index);
	return (1);
}
