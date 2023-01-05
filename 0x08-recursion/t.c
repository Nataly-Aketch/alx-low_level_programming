#include <stdio.h>
#include <string.h>
int main()
{
	char *s = "lonely joh";
	int j = strlen(s) - 1;
	while (j > 0)
	{
		putchar(s[j--]);
	}
	printf("\n");

}
