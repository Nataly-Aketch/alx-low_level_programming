#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %f byte(s)\n", sizeof(char));
	printf("Size of an int: %f byte(s)\n", sizeof(int));
	printf("Size of a long: %f byte(s)\n", sizeof(long));
	printf("Size of a long long: %f byte(s)\n", sizeof(long long));
	printf("Size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
