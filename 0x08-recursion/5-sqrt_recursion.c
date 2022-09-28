#include "main.h"
int check_sqrt(int n, int i);
/**
 * _sqrt_recursion - This function return the square root of n
 * @n: This is an interger variable for the function
 * Return: Return the square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check_sqrt(n, 0));
}

/**
 * check_sqrt -This function the the root of number
 * @n: Number to find the root
 * @i: iterator
 * Return: return the square root
 *
 */

int check_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (check_sqrt(n, i + 1));
}
