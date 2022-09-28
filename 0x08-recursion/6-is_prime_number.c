#include "main.h"
int check_prime(int n, int i);
/**
 * is_prime_number - check if prime number
 * @n: number to check int the function
 * Return: Return prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}
/**
 * check_prime - evalute if the number is sum or not
 * @n: number to check
 * @i: iterator
 * Return: 1 if n is prime otherwise 0
 */

int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check_prime(n, i - 1));
}
 


		
