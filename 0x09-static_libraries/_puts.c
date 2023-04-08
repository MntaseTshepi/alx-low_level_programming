#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: The string input
 *
 */
void _puts(char *str)
{
        while (*str != '\0')
        {
                _putchar(*str);
                str++;
        }
        _putchar('\n');
}
