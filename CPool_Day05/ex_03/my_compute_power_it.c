#include<stdio.h>
#include<unistd.h>

int my_compute_power_it(int nb , int p ) 
{
	int result;
	if (p==0)
		result = 1;
	if (p < 0)
		result = 0;
	if (p > 0)
	{
		int num = 1;
		while (p--)
			num = nb *num;
		result = num;
	}
	return result;
}

