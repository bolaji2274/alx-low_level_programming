#include "main.h"
/**
 * _strlen_recursion - This function return a length of a string
 * @s: This is the string to find the length
 * Return: This return the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
