#include "main.h"

/**
 * more_numbers - prints 1 to 14 ten times
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j <= 14)
		{
			_putchar(j + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
