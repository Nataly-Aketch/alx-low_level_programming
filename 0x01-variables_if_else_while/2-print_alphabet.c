#include <stdio.h>
#include <ctype.h>
/**
 * main - prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphabet = 'a';

	while (alphabet < 'z')
	{
		char small = tolower(alphabet);

		putchar(small);
		putchar('\n');
		alphabet++;
	}
	return (0);
}
