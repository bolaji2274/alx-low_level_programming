#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy -This function copy the string pointed to src
 * to the buffer pointed to dest
 * @dest: This is a pointer variable for dest
 * @src: This is a pointer variable for dest
 * Return: return dest as the copy of src
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = strlen(src);
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

