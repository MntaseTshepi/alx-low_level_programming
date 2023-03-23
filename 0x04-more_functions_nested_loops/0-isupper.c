#include "main.h"

/**
 * _isupper - Function checks if input is an uppercase alphabet character
 * @c: The character input
 *
 * Return: 1 if the alphabet character is uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
