#include "main.h"

/**
 * _isalpha - The function that checks for an alphabetic character.
 * @c: the character
 *
 * Return: 1 if the character is an alphabet, 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
