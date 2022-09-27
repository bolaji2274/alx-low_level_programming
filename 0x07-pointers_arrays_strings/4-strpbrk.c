#include "main.h"
/**
 * _strpbrk - This function search a string for any set of bytes
 * @s: This is a string to be scanned
 * @accept: This is string to be search
 * Return: Return pointer to the accept that match the s string
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[i] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

