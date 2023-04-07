#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The count of arguments supplied to the program
 * @argv: Array of pointers to the string.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}
	printf("%d\n", mul);

	return (0);
}
