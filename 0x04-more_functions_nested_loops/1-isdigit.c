#include "main.h"

/**
 * _isdigit - Functions checks for a digit 0 through 9
 * @c: The character input
 *
 * Return: 1 if character input is a digit, 0 if not
 */

int _isdigit(int c)
{
	if  (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
