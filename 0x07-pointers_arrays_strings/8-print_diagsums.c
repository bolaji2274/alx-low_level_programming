#include "main.h"
#include <string.h>
/**
 * print_diagsums - This function print the sum of diagonal of sqaure matrix
 * @a: This is array to find diagonal
 * @size: This is the size of the matrix
 */

void print_diagsums(int *a, int size)
{
	unsigned int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i][j];
		}
	}
	for (i = 0, i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((i + j) == (size - 1))
				sum2 += a[i][j];
		}
	}
	printf("%d, %d\n", sum1, sum2);
}


