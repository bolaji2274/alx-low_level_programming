#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @k: the charcter to be checked
 * Return: 1 if k is letter
 */

int _isalpha(int k)
{
	return ((k >= 'a' && k <= 'z') || (k >= 'A' && k <= 'Z'));
}
