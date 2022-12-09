#include <stdio.h>
#include <ctype.h>

/**
 * main - prints numbers in base 16 in
 * lowercase using putchar()
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numero = 0;
	int alphabet = 'a';

	while (numero < 10)
	{
		putchar((numero++) + '0');

	}
	while (alphabet <= 'f')
	{
		putchar(tolower(alphabet));
		alphabet++;
	}
	putchar('\n');
	return (0);
}
