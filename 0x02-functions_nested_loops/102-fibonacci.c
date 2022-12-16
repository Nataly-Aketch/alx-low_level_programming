#include <stdio.h>

/**
 * fibonacci - prints fibonacci series
 * @n: number of times
 */

void fibonacci(int n)
{
	long a = 1, i = 1, j = 2, k;

	while (a <= n)
	{
		if (i != 1)
			printf(", ");
		printf("%ld", i);
		k = i + j;
		i = j;
		j = k;
		a++;
	}
}
/**
 * main - prints first 50 fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	fibonacci(50);
	printf("\n");
	return (0);
}
