#include <stdio.h>
/**
 * main - prints the first 50 Fibonnaci
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 203532552)
		{
			printf("%ld,", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		netx = j + k;
		j = k;
		k = next;
	}
	return (0);
}
