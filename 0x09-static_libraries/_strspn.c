#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring.
 * @s: The string input.
 * @accept: The string bytes to be include that match with the string input.
 *
 * Return: The number of bytes in the initial segmanet of @s
 * which consists only of bytes from @accept.
 */

unsigned int _strspn(char *s, char *accept)
{
        int a, b, len;

        len = 0;

        for (a = 0; s[a] != '\0'; a++)
        {
                for (b = 0; accept[b] != '\0'; b++)
                {
                        if (s[a] == accept[b])
                        {
                                len++;
                                break;
                        }
                }
                if (s[a] != accept[b])
                {
                        return (len);
                }
        }
        return (len);
}
