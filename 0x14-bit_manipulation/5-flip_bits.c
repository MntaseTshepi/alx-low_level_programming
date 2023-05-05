#include "main.h"

/**
 * flip_bits - Returns number of bits to be flipped from one number to another
 * @n: First number input
 * @m: Second number input
 * Return: The number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, val_count = 0;
	unsigned long int bin;
	unsigned long int flipped = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		bin = flipped >> i;
		if (bin & 1)
		{
			val_count++;
		}
	}
	return (val_count);
}
