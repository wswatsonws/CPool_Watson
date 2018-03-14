#include<stdio.h>
#include<unistd.h>

int my_strlen(char const *str);

int main()
{
	char *str = "helloworld";
	int len = my_strlen(str);
	printf("%d",len);
	return 0;
}
