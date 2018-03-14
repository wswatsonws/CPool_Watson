#include<stdio.h>
#include<unistd.h>

int my_putstr(char const *str);

int main()
{
	char *str="hello";
	my_putstr(str);
	return 0;
}
