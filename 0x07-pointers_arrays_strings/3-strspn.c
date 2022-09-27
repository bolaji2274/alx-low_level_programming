#include "main.h"
#include <string.h>
/**
 * _strspn - This function return number of bytes in the initial segment
 * @s: This is string to be scanned
 * @accept: This is the string to containing the character match
 * Return: Return the length of scanned math
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
