#include <stdio.h>

/**
 * main - Entry point
 * @argc: The count of arguments supplied to the program.
 * @argv: The array of pointers to the string.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
