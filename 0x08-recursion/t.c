#include <stdio.h>
#include <string.h>
int count(char *s)
{
	int count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return count;
}
int main()
{
	char *str = "Love";
	int len = count(str);
	printf("%d\n", len);
}
