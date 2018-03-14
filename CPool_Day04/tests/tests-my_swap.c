#include<stdio.h>

int my_swap(int *a, int *b);

int main()
{
	int a = 10;
	int b = 12;
	int *p1 = &a;
	int *p2 = &b;
	my_swap(p1,p2);
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
}
