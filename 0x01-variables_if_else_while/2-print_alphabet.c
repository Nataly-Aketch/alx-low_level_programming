#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the alphabet in lowecase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		char small = tolower(alphabet);

		putchar(small);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
