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
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
