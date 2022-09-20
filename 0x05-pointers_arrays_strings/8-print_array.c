#include <stdio.h>

/**
 * print_array - This function print array of number
 * @a: This serve as a pointer variable
 * @n: This is an array of number to be printed
 */

void print_array(int *a, int n)
{
	int size, i;

	size = sizeof(n) / sizeof(n);
	for (i = 0; i < size; i++)
	{
		printf("%d, ", n[i]);
	}
}
