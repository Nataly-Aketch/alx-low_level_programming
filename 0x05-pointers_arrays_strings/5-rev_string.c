#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, j = _strlen(s);
	char *start, *end, temp;

	start = s;
	end = s + j - 1;

	for (i = 0; i < j / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
}
