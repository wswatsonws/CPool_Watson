#include<stdio.h>
#include<unistd.h>

int my_compute_factorial_it(int nb )
{
	int i = 2;
	int fac = 1;
	if (nb == 0 || nb == 1)
	{
		fac = 1;
	}
	if(nb < 0)
	{
		fac = 0;
	}
	else  
	{
		while (i <= nb)  
		{  
			fac = fac * i;  
			i++;  
		}
	}  
	return fac;  
}

