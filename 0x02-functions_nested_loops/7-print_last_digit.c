#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @k: the int to extract the last 
 * Return: value of the last digit
 */
int print_last_digit(int k)
{
	int i;

	if (k < 0)
		k = -k;

	i = k % 10;

	if (i < 0)
		i = -i;

	_putchar(i + '0');

	return (i);
}

