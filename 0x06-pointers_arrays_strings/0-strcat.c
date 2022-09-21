#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - This function concatenate two string variable
 * dest and src
 * @dest: This is first variable
 * @src: This is the second variable
 * Return: This function will return dest
 */

char *_strcat(char *dest, char *src)
{
	int len, len2, i;

	len = strlen(dest);
	len2 = strlen(src);
	for (i = 0; i < len2; i++)
	{
		dest[len + 1] = src[i];
	}

	dest[len] = '\0';

	return (dest);
}

