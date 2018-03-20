#include<stdio.h>

int my_strlen( char const *str)
{
	int len = 0;
	while(( *str++ ))
	{
		len++;
	}
	return len;
}

char * my_revstr(char *str)
{
	int len = my_strlen(str);
	char *start = str;
	char *end = str + len -1;
	char ch;
	if(str != NULL)
	{
		while(start < end)
		{
			ch = *start;
			*start++ = *end;
			*end-- = ch;
		}
	}
	return str;
}


