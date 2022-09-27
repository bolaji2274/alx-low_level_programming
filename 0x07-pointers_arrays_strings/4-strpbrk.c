#include "main.h"
#include <string.h>
/**
 * _strpbrk - This function search a string for any set of bytes
 * @s: This is a string to be scanned
 * @accept: This is string to be search
 * Return: Return pointer to the accept that match the s string
 */

char *_strpbrk(char *s, char *accept)
{
	int len;

	len = strpbrk(s, accept);
	return (len);
}

