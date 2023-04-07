#include <stdio.h>

/**
 * main - Entry point.
 * @argc: The count of arguments supllied to program.
 * @argv: Array of pointers to the string.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
