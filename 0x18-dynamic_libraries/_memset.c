#include "main.h"

/**
 * _memset - Function that fills memory with a constant type.
 * @s: Memory area pointed to by s
 * @b: Constant bytes that will fill the memory area.
 * @n: The number of bytes that will be filled by the b.
 *
 * Return: Pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
