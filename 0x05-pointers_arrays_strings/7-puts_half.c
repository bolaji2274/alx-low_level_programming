#include "main.h"
#include <string.h>
/**
 * puts_half - This function print half of a string
 * @str: This is an argument for the function
 */

void puts_half(char *str)
{
	int i;
	int len;
	int n;

	len = strlen(str);
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2 == 1)
	{
		for (n = (len - 1) / 2; n < len; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
