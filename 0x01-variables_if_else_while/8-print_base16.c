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
	int alphabet = 48;
	int numero = 0;

	while ((numero < 10) && (alphabet < 58))
	{
		putchar((numero++) + '0');
		
		char small = tolower(alphabet);

		putchar(small);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
