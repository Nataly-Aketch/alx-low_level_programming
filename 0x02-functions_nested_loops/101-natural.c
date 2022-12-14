#include <stdio.h>

/**
 * sums - adds positive numbers
 * main - uses sums function to add numbers
 * less than 1024 that are divisible by 3 and 5.
 * Return: always 0
 */
int sums(int n)
{
	int add = 0;
	int i;

	for (i = 0; i < n; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			add += i;
		}
	}
	return add;
}
int main(void)
{
	int j = 1024;
	int result = sums(j);
	printf("%d\n", result);
}
