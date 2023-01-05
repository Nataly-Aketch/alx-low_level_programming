#include <stdio.h>
#include <string.h>
int is_prime_number(int n)
{
	int count = 1, i = 2;
	while (i <= n/2)
	{
		if (n % i == 0)
			count--;
		i++;
	}
	if (count == 0 && n != 1)
		return 1;
	else
		return 0;

}
int main()
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
