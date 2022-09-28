#include "main.h"
/**
 * _pow_recursion -This function return the power of x to y
 * @x: This is main variable
 * @y: This is passing variable for y
 * Return: Return the power of y to value x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
