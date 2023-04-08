#include "main.h"

/**
 * _strpbrk - Function searches a string for any of a set of bytes
 * @s: The string input to search
 * @accept: The string bytes to search for.
 *
 * Return: Pointer to the byte in @s that matches one of the bytes in
 * @accept or NULL if no suc byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
        int a;

        while (*s)
        {
                for (a = 0; accept[a]; a++)
                {
                        if (*s == accept[a])
                        {
                                return (s);
                        }
                }
                s++;
        }
        return ('\0');
}
