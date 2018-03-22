#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);

int my_putstr(char const *str);

int my_strlen(char const *str);

char *my_strcat(char *dest , char const *src);

char *concat_params(int argc, char **argv)
{
	char *str = malloc(sizeof(*str)*argc);
	for(int i = 0;i <argc ; i++)
	{
		if(i == argc - 1)
		{
			str = my_strcat(str ,argv[i] );
			str = my_strcat(str ,"\0");
		}
		else
		{
			str = my_strcat(str ,argv[i] );
			str = my_strcat(str ,"\n");
		}
	}
	return str;
}
