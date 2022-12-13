#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10
 * times using _putchar.
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char n = 0;

	while (n < 10)
	{
		char l = 'a';

		while (l <= 'z')
		{
			_putchar(l);
			l++;
		}
		_putchar('\n');
		n++;
	}
}
