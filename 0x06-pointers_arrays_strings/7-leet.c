#include "main.h"
#include <string.h>
/**
 * leet - This function encoded a string
 * @s: This is a string to encode
 * Return: This function return encoded string
 */

char *leet(char *s)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
	}
	return (s);
}
