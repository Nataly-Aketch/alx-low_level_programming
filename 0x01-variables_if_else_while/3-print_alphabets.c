#include <stdio.h>
#include <ctype.h>

/**
 * main -prints the alphabet in both uppercase
 * and lowercase using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphabet = 'a';
	int alpha = 'A';

	while (alphabet <= 'z')
	{
		putchar(tolower(alphabet));
		alphabet++;
	}

	while (alpha <= 'Z')
	{
		putchar(toupper(alpha));
		alpha++;
	}
	putchar('\n');
	return (0);
}
