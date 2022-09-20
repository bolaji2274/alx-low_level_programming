#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - This function find the length of a string
 * @s: This is a argument for the function
 * Return: len of the string
 */

int _strlen(char *s)
{
	int len;

	len = strlen(*s);
	return (len);
}

