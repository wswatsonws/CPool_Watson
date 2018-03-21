#include<stdio.h>

void my_putchar(char c);

int my_putstr(char const *str);

int main(int ac, char **av)
{
	int i = ac - 1;
	while(i > 0)
	{
		my_putstr(av[i]);
		my_putchar('\n');
		i--;
		
	}
	return 0;
}
