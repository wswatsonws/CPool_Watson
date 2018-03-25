#include<stdio.h>

char *my_strcpy(char *dest, char const *src)
{
	char *tmp = dest;
	while(*src != '\0')//equals(*src!='\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return tmp;
}


