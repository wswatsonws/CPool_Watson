#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int my_putchar(int c);

int my_putstr(char const *str);

int my_put_nbr(int nb)
{	
	if(nb == -2147483648)
	{
		my_putstr("-2147483648");
	}
	else
	{
		if(nb >= 10)
		{
			my_put_nbr(nb / 10);	
			nb=nb % 10;
		}
		if(nb < 10 && nb >= 0)
		{
			my_putchar(nb + '0');
		}
		if(nb < 0)
		{
			int k = -1 * nb;
			my_putchar('-');
			if(k >= 10)
			{
				my_put_nbr(k / 10);	
				k = k % 10;
			}
			if(k < 10 && k >= 0)
			{
				my_putchar(k + '0');
			}	
		}
	}
	return 0;
}
