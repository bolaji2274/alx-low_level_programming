#include "main.h"
#include <string.h>
/**
 * print_number - This function print an integer number using _putchar
 * @n: This is a number to print
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
