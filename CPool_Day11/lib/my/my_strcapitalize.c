#include<stdio.h>

char *my_strlowcase(char *str ) ;

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
		if((a[i] == ' ') || (a[i] == '\t') || (a[i] == '\r') || (a[i] == '\n') || (a[i] >= 32 && a[i] <=47))
		{
			if((a[i+1] >= 'a') && (a[i+1] <= 'z'))
				a[i+1] = a[i+1]-32;
		}
	}
	return a;
}

