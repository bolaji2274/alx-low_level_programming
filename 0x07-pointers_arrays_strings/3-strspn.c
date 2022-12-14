#include "main.h"
/**
 * _strspn - This function return number of bytes in the initial segment
 * @s: This is string to be scanned
 * @accept: This is the string to containing the character match
 * Return: Return the length of scanned math
 */
unsigned int _strspn(char *s, char *accept)
{
	int len, i, j, f;

	f = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[i])
			{
				f++;
				len = 1;
			}
		}
		if (len == 0)
		{
			return (f);
		}
	}
	return (0);
}
