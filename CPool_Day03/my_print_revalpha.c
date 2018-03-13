#include<stdio.h>
#include<unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_print_revalpha(void)
{
	char j;
	j = 'z';
	while(j >= 'a')
	{
		my_putchar(j);
		j--;
	}
	my_putchar('\n');
	return 0;
}
