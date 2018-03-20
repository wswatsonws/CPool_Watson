#include<stdio.h>

int my_strlen(char const *str)
{
	int len = 0;
	while(( *str++ ))
	{
		len++;
	}
	return len;
}

int my_char_is_num(char c)
{
	if(c >= '0' && c <='9' )
		return 1;
	else
		return 0;
}

int my_str_isnum ( char const * str) 
{
	int i = 0;
	int len = my_strlen(str);
	if(len ==0)
		return 1;
	while(str[i] != '\0')
	{
		if (my_char_is_num(str[i]) != 1)
		{
			return 0;
		}
		i++;
	}
	return 1;
}

