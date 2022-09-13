#include "main.h"

/**
 *print_alphabet_x10 - print 10 times the alphabet
 */

void print_alphabet_x10(void)
{
	char m;
	int i;

	for (m = 'a'; m <= 'z'; m++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(m);
		}
	}
	_putchar('\n');
}
