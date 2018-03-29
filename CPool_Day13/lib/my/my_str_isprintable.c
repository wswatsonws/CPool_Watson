#include<stdio.h>

int my_strlen(char const *str);

int my_str_isprintable(char const * str)
{
	int len = my_strlen(str);
	int i = 0;
	if(len ==0)
		return 1;
	while(str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
		{
			return 0;
		}
		i++;
	}
	return 1;
}



