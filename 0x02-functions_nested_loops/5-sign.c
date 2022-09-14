#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @k:the int k to check
 * Return: 1 and prints 0 if k is zero
 */
int print_sign(int k)
{
	if (k > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (k == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (k < 0)
	{
		_putchar('-');
	}
	return (-1);
}
