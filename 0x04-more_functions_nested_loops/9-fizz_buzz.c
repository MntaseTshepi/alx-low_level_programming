#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100, followed by a new line.
 * For the multiples of three Fizz is printed.
 * For the multiples of five Buzz is printed.
 * For the multiples of three and five FizzBuzz is printed.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 1;
	printf("%d", i);

	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
