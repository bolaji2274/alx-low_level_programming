#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - This function will reverse a string
 * @s: This is an argument for the function
 */

void rev_string(char *s)
{
	int len;
	int i;
	int j;
	char temp[];

	len = strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		for (j = 0; j < len; j++)
		{
			temp[j] = s[i];
		}
	}
	return (temp);
}
