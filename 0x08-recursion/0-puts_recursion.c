#include "main.h"
/**
 * _puts_recursion - This function print a string
 * @s: This is a string to print
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\n'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

