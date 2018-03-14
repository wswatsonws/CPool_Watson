#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

char * my_evil_str(char *str);

int main()
{
	char str[] = "hello";
	printf("%s",str);
	printf("\n");
	my_evil_str(str);
	printf("%s",str);
	return 0;
}
