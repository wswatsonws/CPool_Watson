#include<stdio.h>

char *my_strlowcase(char *str ) 
{
	if(str)
	{
		for(int i = 0;str[i] != '\0';i++)
		{
			if(str[i] >= 'A' && str[i] <= 'Z') 
				str[i] += 32;
		}
	}
    return str;
}

char *my_strcapitalize(char *str)
{
	char *a;
	a = my_strlowcase(str);
	int i;
	for(i=0; a[i] != '\0'; i++)
	{
		if((a[0] >= 'a') && (a[0] <= 'z'))
		{
			a[0] = a[0]-32;
			i++;
		}
		if((a[i] >= 7 && a[i] <= 13) || (a[i] >= 32 && a[i] <= 47) || (a[i] >= 58 && a[i] <= 64))
		{
			if((a[i+1] >= 'a') && (a[i+1] <= 'z'))
				a[i+1] = a[i+1]-32;
		}
	}
	return a;
}
