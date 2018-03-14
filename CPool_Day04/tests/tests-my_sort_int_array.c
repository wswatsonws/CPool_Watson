#include<stdio.h>
#include<unistd.h>

void my_sort_int_array(int *array , int size) ;

int main()
{
	int array[] = {9,8,7,3,1,5,58,0,54,98,12,2,4,31};
	int len = sizeof(array) / sizeof(array[0]);
	my_sort_int_array(array,len);
	printf("%d\n",len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}

