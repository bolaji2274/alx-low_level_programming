#include "main.h"
#include <stdio.h>
/**
 *swap_int - This is function that swap two variable
 *@a: This is first variable to swap
 *@b: This is second variable to swap
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
