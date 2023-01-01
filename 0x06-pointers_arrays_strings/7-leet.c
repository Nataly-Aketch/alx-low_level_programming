#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string int0 1337
 * @s: string to be encoded
 * Return: encoded string s
 */

char *leet(char *s)
{
	int i = 0, j;
	char str[] = "aeotl";
	int str1[] = {4,3,0,7,1};
	char str2[] = "AEOTL";

	while ( s[i] != '\0')
	{
		for (j = 0; j <= 5; j++)
		{
			if (str[j] == s[i] || str2[j] == s[i])
			{
				str[i] = str1[j];
			}
		}
		i++;
	}
	return (s);
}
int main(void)
{
	    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	        char *p;

		    p = leet(s);
		        printf("%s", p);
			    printf("%s", s);
			        return (0);
}
