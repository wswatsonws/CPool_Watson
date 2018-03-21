#include<stdio.h>

void my_putchar(char c);

int my_putstr(char const *str);

int main(int ac, char **av)
{
	int i = 0;
	for(i = 0;i < ac; i++)
	{
		my_putstr(av[i]);
		my_putchar('\n');
	}
	return 0;
}
