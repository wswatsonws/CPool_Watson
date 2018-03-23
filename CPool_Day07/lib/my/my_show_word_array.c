#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);

int my_putstr(char const *str);

int my_strlen(char const *str);

char *my_strcat(char *dest , char const *src);

int my_show_word_array(char * const *tab)
{
	int len = 0;
	while(tab[len])
	{
		len++;
	}
	char *str = malloc(sizeof(*str)*len);
	for(int i = 0;i <len  ; i++)
	{
			if(tab[i] != '\0')
			{
				str = my_strcat(str ,tab[i] );
				str = my_strcat(str ,"\n");
			}
	}
	my_putstr(str);
	return 0;
}
