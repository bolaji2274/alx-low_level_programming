#include "main.h"
#include <string.h>
/**
 * _memcpy- This function copy a string to a dest
 * @dest: This is destination for copy memory
 * @src: This is a string memory to copy
 * @n: This is a number of item to copy
 * Return: Return dest as the new memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(*dest, *src, n);
	return (dest);
}
