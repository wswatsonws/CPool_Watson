#include<stdio.h>

char *my_strupcase(char *str ) 
{
	if(str)
	{
		for(int i = 0;str[i] != '\0';i++)
		{
			if(str[i] >= 'a' && str[i] <='z') 
				str[i] -= 32;
		}
	}
    return str;
}
