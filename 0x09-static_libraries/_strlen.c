#include "main.h"

/**
 * _strlen - Function returns the length of a string
 * @s: The string input
 *
 * Return: The value of the length of a string.
 */

int _strlen(char *s)
{
        int char_count;

        char_count = 0;

        while (s[char_count] != '\0')
        {
                char_count++;
        }

        return (char_count);
}
