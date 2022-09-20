#include "main.h"
#include <stdio.h>
#include <stdio.h>
#include <string.h>
/**
 * _atoi - This function return an interger for a string value
 * @s: This is an argument for the function
 * Return: This will return the new value
 */

int _atoi(char *s)
{
	int len, d, n, i, f, digit;

	len = strlen(s);
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}
