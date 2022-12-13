#include"main.h"

/**
 * print_alphabet - prints alphabet in lower case followed by newline
 */

void print_alphabet(void)
{
	char A = 'a';

	while (A <= 'z')
	{
		_putchar(A);
		A++;
	}
	_putchar('\n');
}
