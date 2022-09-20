#include <stdio.h>

/**
 * print_array - This function print array of number
 * @a: This serve as a pointer variable
 * @n: This is an array of number to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n -1; i++)
	{
		printf("%d, ", a[i]);
		if (i + 1 == n - 1)
		{
			printf("%d", a[n-1]);
		}
	}
}
