/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
#include <stdio.h>
int main(void)
{
	printf("Size of a char: %ld bytes(s)\n", (long unsigned int)sizeof(char));
	printf("Size of an int: %ld bytes(s)\n", (long unsigned int)sizeof(int));
	printf("Size of a long int: %ld bytes(s)", (long unsigned int)sizeof(long int));
	print("Size of a long long int: %ld bytes(s)\n", (long unsigned int)sizeof(long long int));
	printf("Size of a float: %ld bytes(s)\n", (long unsigned int)sizeof(float));
	return (0);
}
