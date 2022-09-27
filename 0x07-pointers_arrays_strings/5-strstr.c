#include "main.h"
#include <string.h>
/**
 * _strstr - This function locate a subtring
 * @haystack: This is the main string to check
 * @needle: This is a string to compare
 * Return: Return pointer to the funded substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *p;

	p = strstr(haystack, needle);
	return (p);
}
