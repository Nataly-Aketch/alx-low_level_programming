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

	while (alphabet <= 'z')
	{
		putchar(tolower(alphabet));
		alphabet++;
	}
	int alpha_bet = 'A';

	while (alpha_bet <= 'Z')
	{
		putchar(toupper(alpha_bet));
		alpha_bet++;
	}
	putchar('\n');
	return (0);
}
