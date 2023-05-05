#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned int.
 * @b: Binary string input.
 * Return: Converted number or 0 if unsucessful.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b == '0')
		{
			dec_val <<= 1;
			b++;
		}
		else if (*b == '1')
		{
			dec_val <<= 1;
			dec_val |= 1;
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (dec_val);
}
