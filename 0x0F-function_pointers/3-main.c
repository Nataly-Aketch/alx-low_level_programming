#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - perfoms basic arithmetic
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i, j, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	if ((strcmp(argv[2], "+") != 0) && (strcmp(argv[2], "-") != 0)
	&& (strcmp(argv[2], "*") != 0) && (strcmp(argv[2], "/") != 0) &&
	(strcmp(argv[2], "%") != 0))
	{
		printf("Error\n");
		exit(99);
	}
	if (((strcmp(argv[2], "/") == 0) || (strcmp(argv[2], "%") == 0)) && j == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = (*get_op_func(argv[2]))(i, j);
	printf("%d\n", result);
	return (0);
}
