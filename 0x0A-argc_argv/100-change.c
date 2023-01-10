#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i, j, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		j = atoi(argv[1]);
		if (j < 0)
			printf("0\n");
		if (j >= 10 && j < 100)
		{
			cents = j / 10;
			printf("%d\n", cents);
		}
		if (j == 100)
		{
			cents = j / 25;
			printf("%d\n", cents);
		}
		if (j > 100)
		{
			cents = (j / 25) + 1;
			printf("%d\n", cents);
		}
	}
	return (0);
}
