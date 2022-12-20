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
	char list[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+=-`~,./';[]\"\\{}:><?";
	srand(time(NULL));
	for (int i = 0; i < len; i++)
	{
		printf("%c", list[rand() % (sizeof list - 1)]);
	}
	printf("\n");
}
int main(void)
{
	password_gen(15);
}
