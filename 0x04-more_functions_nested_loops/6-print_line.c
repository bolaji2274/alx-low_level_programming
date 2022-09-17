#include "main.h"

/**
 * print_line - Function to print a straight line
 * @n: int number
 * Return: 0 Always (Success)
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}


