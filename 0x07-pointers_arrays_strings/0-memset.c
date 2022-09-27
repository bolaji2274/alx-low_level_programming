#include "main.h"
#include <string.h>
/**
 * _memset - This function fill the byte of n with b
 * @s: This is a string memory to fill
 * @b: This is char to be fill in s
 * @n: This is a number of bytes to be filled
 * Return: This will return the s for the new fill bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
