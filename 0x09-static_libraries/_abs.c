#include "main.h"

/**
 * _abs - Outputs the absolute value of an integer
 * @n: The integer that will be turned to an absolute value.
 *
 * Return: The absolute value
 */
int _abs(int n)
{
        if (n >= 0)
        {
                return (n);
        }
        else
        {
                n = n * -1;
                return (n);
        }
}
