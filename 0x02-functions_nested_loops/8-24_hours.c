#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */

void jack_bauer(void)
{
	int i = 0;

	while (i <= 23)
	{
		int j = 0;

		while (j <= 59)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar((':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		i++;
	}
}
