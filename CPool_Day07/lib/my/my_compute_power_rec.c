#include<stdio.h>
#include<unistd.h>

int my_compute_power_rec(int nb , int p ) 
{
	int result;
	if (p==0)
		result = 1;
	if (p < 0)
		result = 0;
	if (p > 0)
	{
			result=my_compute_power_rec(nb,p-1)*nb;
	}
	return result;
}
 

