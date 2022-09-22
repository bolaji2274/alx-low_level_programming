#include "main.h"
#include <string.h>
/**
 * string_toupper - This string will convert lowercase to upper
 * @s: This is a string to convert
 * Return: Return the convert string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
