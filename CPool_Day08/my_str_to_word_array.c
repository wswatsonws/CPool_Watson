#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_putstr(char const *str);

int my_strlen(char const *str);

char **my_str_to_word_array(char const *str)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int x = 0;
	char **dest;
	dest = malloc(sizeof(char*) * (my_strlen(str) + 1));
	dest[0] = malloc(sizeof(char) * (my_strlen(str) + 1));
	while(str[i] != '\0') 
	{
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') ||  (str[i] >= '0' && str[i] <= '9')) 
		{
			x = 1;
			dest[j][k] = str[i];
			k++;
		} 
		else
		{
			if(x == 1) 
			{
				dest[j + 1] = malloc(sizeof(char) * (my_strlen(str) + 1));
				j++;
				k = 0;
				x = 0;
			}
		} 		
		i++;
	}
	return dest;
}

