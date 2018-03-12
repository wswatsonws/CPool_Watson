#include<stdio.h>
#include<unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_isneg(int n)
{
	if(n<0)
		my_putchar('N');
	else if(n>0)
		my_putchar('P');
	else
	{
		my_putchar('N');
		my_putchar('U');
		my_putchar('L');
		my_putchar('L');
	}
	my_putchar('\n');
	return 0;
}

