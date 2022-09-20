#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - This is a function that print a string in reverse order
 * @s: This is an argument for the function
 */

void print_rev(char *s)
{
	int len;
	int i;

	len = strlen(rev);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

