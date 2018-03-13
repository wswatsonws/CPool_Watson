#include<stdio.h>
#include<unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_print_digits(void)
{
	char k = '0';
	while(k <= '9')
	{
		my_putchar(k);
		k++;
	}
	my_putchar('\n');
	return 0;
}
