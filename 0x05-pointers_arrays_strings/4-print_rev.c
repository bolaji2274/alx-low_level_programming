#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - This is a function that print a string in reverse order
 * @s: This is an argument for the function
 */

void print_rev(char *s)
{
	char rev[];
	int len;
	int i;

	rev[] = strrev(s);
	len = strlen(rev);

	for (i = 0; i < len; i++)
	{
		_putchar(rev[i]);
	}
	_putchar('\n');
}

