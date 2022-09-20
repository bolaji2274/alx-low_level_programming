#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - This function will reverse a string
 * @s: This is an argument for the function
 */

void rev_string(char *s)
{
	int len, len1, i;
	char tmp;

	len = strlen(s);
	len1 = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len--] = tmp;
	}
}

