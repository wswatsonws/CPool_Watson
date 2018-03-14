#include<stdio.h>
#include<unistd.h>

void my_sort_int_array(int *array , int size) 
{
	int temp = 0;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size-i-1; j++)
		{
			if (array[j] > array[j+1])
			{
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}
	}
}
