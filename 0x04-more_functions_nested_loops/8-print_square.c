#include "main.h"

/**
 * print_square - Function for print the square
 * @size: int size
 *Return: 0 Always (Success)
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#);
			}
			_putchar('\n');
		}
	}
}
