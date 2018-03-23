#include<stdio.h>

char *my_strcat(char *dest , char const *src)
{	
	char *tmp=dest;
	while(*dest != '\0')
	{
		dest++;
	}
	while((*dest++=*src++))
	{
		NULL;
	}
	return tmp;
}

