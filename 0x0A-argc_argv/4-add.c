#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i = 1, sum = 0;

	for (; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	if ((strcmp(argv[argc - 1], "1") == 0) || (strcmp(argv[argc - 1], "2") == 0)
	|| (strcmp(argv[argc - 1], "3") == 0) || (strcmp(argv[argc - 1], "4") == 0) ||
	(strcmp(argv[argc - 1], "5") == 0) || (strcmp(argv[argc - 1], "6") == 0) ||
	(strcmp(argv[argc - 1], "7") == 0) || (strcmp(argv[argc - 1], "8") == 0) ||
	(strcmp(argv[argc - 1], "9") == 0))
		printf("%d\n", sum);
	else
		printf("Error\n");
	return (0);
}
