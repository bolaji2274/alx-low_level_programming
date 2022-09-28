#include "main.h"
/**
 * _puts_recursion - This function print a string
 * @s: This is a string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

