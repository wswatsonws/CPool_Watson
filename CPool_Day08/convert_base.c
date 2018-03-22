#include <stdio.h>
#include <stdlib.h>

int my_putnbr_base(int nbr , char const *base) ;

int my_getnbr_base(char const * str , char const *base);

int my_strlen(char const *str);

void my_putchar(char c);

char *convert_base(char const *nbr , char const *base_from , char const * base_to)
{
	int decnum;
	char *str = malloc(sizeof(*str));
	decnum = my_getnbr_base(nbr , base_from);
	if(decnum ==0)
	{
		my_putchar('0');
	}
	if( my_strlen(base_to) == 1)
	{
		my_putchar('0');
	}
	else
		 my_putnbr_base(decnum , base_to);
	return 0;
}
