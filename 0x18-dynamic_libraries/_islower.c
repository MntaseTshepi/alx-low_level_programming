#include "main.h"

/**
 * _islower - checks if a character is a lowercase.
 * @c: the character
 *
 * Return: 1 if the letter is a lowercase, 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

