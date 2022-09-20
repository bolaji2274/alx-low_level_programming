#include <stdio.h>

/**
 * print_array - This function print array of number
 * @a: This serve as a pointer variable
 * @n: This is an array of number to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
