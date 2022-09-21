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
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

