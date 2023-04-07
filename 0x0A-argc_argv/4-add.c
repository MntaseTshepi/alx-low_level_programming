#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: The count of arguments supplied to the program.
 * @argv: Array of pointers to string.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, sum;
	unsigned int j;
	char *n;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			n = argv[i];

			for (j = 0; j < strlen(n); j++)
			{
				if (n[j] < 48 || n[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum = sum + atoi(argv[i]);
			n++;

		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}

