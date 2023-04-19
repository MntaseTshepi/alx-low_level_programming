#include "function_pointers.h"


/**
 * print_name - Function that prints a name.
 * @name: The name input.
 * @f: The pointer to a fucntion.
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
