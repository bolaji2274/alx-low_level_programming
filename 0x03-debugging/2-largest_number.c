#include <stdio.h>
#include "main.h"
/**
 * main - prints the largest of 3 integers
 * @a for the first variable
 * @b for the second variable
 * @c for the third variable
 * Return: largest_number
 */

int largest_number(int a, int b, int c)
{
	int largest;
	
	if (a >=  b && b >= c)
	{
		largest = a;
	}
	else if (b >= a && a >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
