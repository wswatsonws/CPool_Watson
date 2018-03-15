#include <stdio.h>

int divide(int a,int b)
{
	if(b == a - 1)
		return 1;
	if( a %b == 0)
		return 0;
	return divide(a ,b + 1);
}

int  my_is_prime( int nb)
{
	if(nb < 2)
		return 0;
	if(nb == 2)
		return  1;
	return  divide(nb , 2);
}

