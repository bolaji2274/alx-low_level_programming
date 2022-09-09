/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	char ch;
	char ck;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ck = 'A'; ck <= 'Z'; ck++)
	{
		putchar(ck);
	}
	putchar('\n');
	return (0);
}
