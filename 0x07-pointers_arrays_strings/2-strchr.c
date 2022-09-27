#include "main.h"
#include <string.h>
/**
 * _strchr - This function return the first character
 * @s: This the string to return from
 * @c: This is the first character to return
 * Return: This will c1 as the first character
 */
char *_strchr(char *s, char c)
{
	char c1 = strchr(s, c);

	return (c1);
}
