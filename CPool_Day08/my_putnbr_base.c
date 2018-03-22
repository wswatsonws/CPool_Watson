#include<stdio.h>
#include<unistd.h>

int my_strlen(char const *str);

void my_putchar(char c);

int my_putnbr_base(int nbr , char const *base) 
{
	int ibase = my_strlen(base);
	if(nbr < 0)
	{
		nbr = nbr * -1;
		my_putchar('-');
	}
	if(nbr >= ibase)
	{
		my_putnbr_base(nbr / ibase,base);
		nbr = nbr % ibase;
		
	}
	if(nbr >=0 && nbr <= ibase)
		my_putchar(base[nbr]);
	return 0;
}
