#include "main.h"
#include <string.h>
/**
 * _strcmp - This function compare two string
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: Return 0 if equal otherwise less or greater
 * if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
