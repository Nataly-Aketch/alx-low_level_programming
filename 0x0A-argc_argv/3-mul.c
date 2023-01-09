#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two number
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i, j, k, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		j = atoi(argv[1]);
		k = atoi(argv[2]);
		result = j * k;
	}
	printf("%d\n", result);
	return (0);
}
