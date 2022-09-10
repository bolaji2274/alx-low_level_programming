/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	int n, k;

	for (n = 0; n < 100; n++)
	{
		for (k = 0; k < 100; k++)
		{
			if (n < k)
			{
				putchar(n);
				putchar(k);
			}
			if (n != 98 || k != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

