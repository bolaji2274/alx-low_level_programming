#include "main.h"
#include <string.h>
/**
 * reverse_array -This function reverse array of number
 * @a: This is an arry to reverse
 * @n: This is a number of array
 */

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	j = n - 1;
	for (i = 0; i < len / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
