#include<stdio.h>
#include<unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_print_comb(void)
{
	char a='0';
	char b='1';
	char c='2';
	
	while(a<='9'){
	//for(;a<='9';a++)
	for(;b<='9';b++)
	for(;c<='9';c++)
	if(a!=b && a!=c && b!=c)
	{
		my_putchar(a);
		my_putchar(b);
		my_putchar(c);
		my_putchar(' ');
			
	}
	a++;
	}	
	return 0;
}