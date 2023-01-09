#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
	}
	printf("%d\n", argc - 1);
	return (0);
}
