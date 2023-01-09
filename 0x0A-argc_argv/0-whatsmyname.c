#include <stdio.h>

/**
 * main - program that prints its name
 * @argc: argument count
 * @argv: array of character pointers
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
