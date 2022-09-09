/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'p' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
		putchar('\n');
	}
	return (0);
}
