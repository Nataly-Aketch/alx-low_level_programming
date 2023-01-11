#include <stdio.h>
char *_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while ((*dest++ = *src++))
	{}
	src = '\0';
	return dest;
}
int main()
{
	char *s = "Love";
	char *s1 = " me";
	_strcat(s, s1);
	printf("%s\n", s);
}
