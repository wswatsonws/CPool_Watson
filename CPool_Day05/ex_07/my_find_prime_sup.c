#include <stdio.h>

int  my_is_prime( int nb);

int my_find_prime_sup( int nb)
{
	if(nb<=1)
		return 2;
	else
	{
		for(int i=nb;i;i++)
		{
			if(my_is_prime(i))
				return i;
		}
	}
	return 1;
}


