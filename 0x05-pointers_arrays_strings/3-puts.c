#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - This function print a string
 * @str: This is an argument for the function
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i < strlen(*str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
