#include "main.h"

/**
 * _strlen_recursion - Function that returns ths length of a string.
 * @s: The string input.
 *
 * Return: The length of a string or 0 if there is no string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
