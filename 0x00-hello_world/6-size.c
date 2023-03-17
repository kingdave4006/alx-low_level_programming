#include <stdio.h>

/**
 * main - the starting point of this program
 *
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char)\n);
	printf("size of int: %lu byte(s)", sizeof(int)\n);
	printf("size of a long int: %lu byte(s)", sizeof(long int)\n);
	printf("size of a long long int: %lu byte(s)", sizeof(long long int)\n);
	printf("Size of a float: %lu byte(s)", sizeof(float)\n);
	return (0);
}
