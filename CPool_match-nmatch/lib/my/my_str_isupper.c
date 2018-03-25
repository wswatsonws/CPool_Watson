#include<stdio.h>

int my_strlen(char const *str);

int my_char_is_upper(char c)
{
	if(c >= 'A' && c <='Z') 
		return 1;
	else
		return 0;
}

int my_str_isupper ( char const * str) 
{
	
	int i = 0;
	int len = my_strlen(str);
	if(len ==0)
		return 1;
	while(str[i] != '\0')
	{
		if (my_char_is_upper(str[i]) != 1)
		{
			return 0;
		}
		i++;
	}
	return 1;
}

