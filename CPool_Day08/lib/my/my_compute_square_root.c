#include<stdio.h>

int my_compute_power_rec(int nb , int p );

int my_compute_square_root(int nb )
{
	int a=1;
	while (a<=nb)
	{
		if(my_compute_power_rec(a , 2) == nb)
		{
			return a;
		}
		a++;
	}
	return 0;
}

