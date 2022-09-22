#include "main.h"
#include <string.h>
/**
 * cap_string - This function capitalise all world
 * @str: The string to capitalise
 * Return: This function return str
 */
char *cap_string(char *str)
{
	int i, j;
	char space[13];

	space[13] = {'', '\t', '\n', ',', ';', ':', '!', '?',
		'"', '(', ')', '{', '}'};
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;

		for (j = 0; j < 13; j++)
		{
			if (str[i] == space[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}

	return (src);
}
