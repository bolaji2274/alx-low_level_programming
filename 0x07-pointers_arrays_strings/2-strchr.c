#include "main.h"
/**
 * _strchr - This function return the first character
 * @s: This the string to return from
 * @c: This is the first character to return
 * Return: This will c1 as the first character
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
