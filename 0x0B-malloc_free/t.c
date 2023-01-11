#include <string.h>
#include <stdio.h>
int main()
{
	char str[] = "Becky";
	int len = strlen(str), siz = sizeof(str);	
	printf("len = %d size = %d\n", len, siz);
}
