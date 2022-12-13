#include <unistd.h>
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
