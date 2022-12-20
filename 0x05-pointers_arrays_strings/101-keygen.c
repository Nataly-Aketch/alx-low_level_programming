#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * password_gen - generates random passwords
 * @len: length of password
 * Return: returns generated password
 */
int password_gen(int len)
{
	char list[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int i;

	srand(time(NULL));
	for (i = 0; i < len; i++)
	{
		printf("%c", list[rand() % (sizeof(list) - 1)]);
	}
	printf("\n");
	return (0);
}
/**
 *main - checks code
 * Return: Always 0
 */
int main(void)
{
	password_gen(15);
	return (0);
}
