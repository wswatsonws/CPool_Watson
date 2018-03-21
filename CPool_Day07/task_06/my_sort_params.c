#include<stdio.h>

void my_putchar(char c);

int my_putstr(char const *str);

int my_strcmp(char const  *s1,char const  *s2);

char *my_strcpy(char *dest, char const *src);

int main(int ac, char **av)
{
	for(int i = 0;i < ac - 1; i++)
	{
		for (int j = 0; j < ac-i -1; j++)
		{
			if (my_strcmp(av[j],av[j+1]) > 0 )
			{
				 char *temp;
				temp = av[j+1];
				av[j+1] = av[j];
				av[j] = temp;
			}
		}
	}
	for(int count = 0;count < ac; count++)
	{
		my_putstr(av[count]);
		my_putchar('\n');
	}
	return 0;
}

