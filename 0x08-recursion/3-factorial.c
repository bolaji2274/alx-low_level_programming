#include "main.h"
/**
 * factorial - This function return the factorial of a number
 * @n: This is an interger the function will return
 * Return: This will return value for n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
