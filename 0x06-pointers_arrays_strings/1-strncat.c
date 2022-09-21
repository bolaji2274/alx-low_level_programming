#include "main.h"
#include <string.h>
/**
 * _strncat -This function will concatenate and use n byte from src
 * @dest: This is a variable that will be return
 * @src: This is a variable that will be concatenate with dest
 * @n: This is a number for the size of the string
 * Return: The function will return dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
