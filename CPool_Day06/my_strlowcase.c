#include<stdio.h>

char *my_strlowcase(char *str ) 
{
	if(str)
	{
		for(int i = 0;str[i] != '\0';i++)
		{
			//if(str[i] >= 'a' && str[i] <='z') 
			//	str[i] -= 32;
			if(str[i] >= 'A' && str[i] <= 'Z') 
				str[i] += 32;
		}
	}
    return str;
}

int main()
{
	char str1[60] = "hello9865HELLO";
	//char *str2=malloc(5);
	//str1="hello\0"; 
	printf("%s\n", my_strlowcase(str1) );  
	return 0;
}

