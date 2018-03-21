#include<stdio.h>
#include<unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_print_comb(void)
{
	int num = 0;
	int a,b,c = 0;
	while(num <= 999)
	{
		a = num / 100 % 10;
		b = num / 10 % 10;
		c = num / 1 % 10;
		if(a < b && b < c)
		{
			char d = a + '0';
			char e = b + '0';
			char f = c + '0';
	
				my_putchar(d);
				my_putchar(e);
				my_putchar(f);
				if(num != 789)
				{
					my_putchar(',');
					my_putchar(' ');
				}
		}
		num++;
	}
	return 0;
}
