#include "main.h"

/**
 * print_alphabet - The function produces the alphabet and prints it out.
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

