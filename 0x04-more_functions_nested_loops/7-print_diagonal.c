#include "main.h"

/**
 * print_diagonal - print the diagonal
 * @n: int number`
 * Return: 0 Always (Success)
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
