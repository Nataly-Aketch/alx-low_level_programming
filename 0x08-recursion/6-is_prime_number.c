#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - checks if n is prime
 * @n: integer to checked
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
}
int main(void)
{
	    int r;

	        r = is_prime_number(1);
		    printf("%d\n", r);
		        r = is_prime_number(1024);
			    printf("%d\n", r);
			        r = is_prime_number(16);
				    printf("%d\n", r);
				        r = is_prime_number(17);
					    printf("%d\n", r);
					        r = is_prime_number(25);
						    printf("%d\n", r);
						        r = is_prime_number(-1);
							    printf("%d\n", r);
							        r = is_prime_number(113);
								    printf("%d\n", r);
								        r = is_prime_number(7919);
									    printf("%d\n", r);
									        return (0);
}
