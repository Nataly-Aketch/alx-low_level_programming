#include "main.h"
#include <stdio.h>
/**
 * _memset - files first n bytes of memory area
 * pointed to by s with constants byte b
 * @s: block of memory
 * @b: constant character byte
 * @n: number of bytes
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
void simple_print_buffer(char *buffer, unsigned int size)
{
	        unsigned int i;

		        i = 0;
			        while (i < size)
					        {
							                if (i % 10)
										                {
													                        printf(" ");
																                }
									                if (!(i % 10) && i)
												                {
															                        printf("\n");
																		                }
											                printf("0x%02x", buffer[i]);
													                i++;
															        }
				        printf("\n");
}
int main(void)
{
	    char buffer[98] = {0x00};

	        simple_print_buffer(buffer, 98);
		    _memset(buffer, 0x01, 95);
		        printf("-------------------------------------------------\n");
			    simple_print_buffer(buffer, 98);    
			        return (0);
}
