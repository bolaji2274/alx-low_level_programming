#include "main.h"
#include <string.h>
/**
 * _strncpy -This function copy a string
 * @dest: This is first variable argument
 * @src: This is second variable argument
 * @n: This is number to be passed
 * Return: This function will return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

