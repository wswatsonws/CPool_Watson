#include<stdio.h>
#include<unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_print_comb2(void)
{
	int num = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	while(num <= 9999)
	{
		a = num / 1 % 10;
		b = num / 10 % 10;
		c = num / 100 % 10;
		d = num / 1000 % 10;
		if(d * 10 + c < b * 10 + a)
		{
			char m = a + '0';
			char n = b + '0';
			char o = c + '0';
			char p = d + '0';
			if((d * 1000 + c * 100 + b * 10 + a) != 9899)
			{
				my_putchar(p);
				my_putchar(o);
				my_putchar(' ');
				my_putchar(n);
				my_putchar(m);
				my_putchar(',');
				my_putchar(' ');
			}
			
		}
		num ++;
	}
	my_putchar('9');
	my_putchar('8');
	my_putchar(' ');
	my_putchar('9');
	my_putchar('9');
	return 0;
}

