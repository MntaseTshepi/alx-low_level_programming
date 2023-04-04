#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals of a square matrix.
 * @a: The array that produces a matrix of integers
 * @size: The size of the matrix, size of rows and column.
 */

void print_diagsums(int *a, int size)
{
	int sum_diag1 = 0;
	int sum_diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_diag1 = sum_diag1 + a[i * size + i];
		sum_diag2 = sum_diag2 + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
