#include<stdio.h>
#include<unistd.h>

int my_putstr(char const *str)
{
	int len=0;
	char  const *n;
	n = str;
	while((*n++))
	{
		len++;
	}
	write(1,str,len);
	return 0;
}
