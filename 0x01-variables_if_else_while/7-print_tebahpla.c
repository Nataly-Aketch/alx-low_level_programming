#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphabet = 'z';

	while (alphabet >= 'a')
	{
		char small = tolower(alphabet);

		putchar(small);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
