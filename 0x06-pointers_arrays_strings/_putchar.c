#include <unistd.h>

/**
 * _putchar -prints char to stdout
 * @c: character printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set approximately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
