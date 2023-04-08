#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: Memory area pointed to by dest.
 * @src: Memory area pointed to by src.
 * @n: The number of bytes copied from src to dest.
 *
 * Return: Pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                dest[i] = src[i];
        }
        return (dest);
}
