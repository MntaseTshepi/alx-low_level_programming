#include "3-calc.h"

/**
 * get_op_func - Selects function to perform operation chosen by user.
 * @s: The operation input.
 *
 * Return: Pointer to function or NULL if failure.
 */

int (*get_op_func(char *s))(int, int)
{
	 op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
    char *operator = "+-*/%";

    i = 0;

    while (i < 6)
	{
		if s == operator[i]
		{
			operator[i] == "+" ? return opp_add : NULL;
			operator[i] == "-" ? return opp_sub : NULL;
			operator[i] == "*" ? return opp_mul : NULL;
			operator[i] == "/" ? return opp_div : NULL;
			operator[i] == "%" ? return opp_mod : NULL;
		}
		i++;
	}
    return (NULL);
}



