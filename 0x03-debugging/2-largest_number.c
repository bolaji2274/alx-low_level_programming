#include <stdio.h>
#include "main.h"
/**
 * largest_number - prints the largest of 3 integers
 * @a: for the first variable
 * @b: for the second variable
 * @c: for the third variable
 * Return: largest_number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (a > c)
			largest = a;
		else
			largest = b;
	}
	else
	{
		if (b > c)
			largest = b;
		else
			largest = c;
	}

	return (largest);
}
