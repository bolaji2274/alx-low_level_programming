#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - This function print 2 character ahead
 * @str: This is an argument for the function
 */

void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
