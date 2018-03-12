#include<stdio.h>
#include<unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_print_alpha(void)
{
	char i;
	i = 'a';
	while(i<='z')
	{
		my_putchar(i);
		i++;
	}
	my_putchar('\n');
	return 0;
}