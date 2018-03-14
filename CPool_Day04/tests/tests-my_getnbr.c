#include<stdio.h>
#include<unistd.h>

int my_getnbr(char const  *str) ;

int main()
{
	
	char *str0 = "+---+--++---+---+---+-42";
	char *str1 = "42a43";
	char *str2 = "11000000000000000000000042";
	char *str3 = "−1000000000000000000000042";
	my_getnbr(str0);
	printf("\n");
	my_getnbr(str1);
	printf("\n");
	my_getnbr(str2);
	printf("\n");
	my_getnbr(str3);
	return 0;
}
