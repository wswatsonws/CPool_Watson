#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_putstr(char const *str);

int my_strlen(char const *str);

int find_word(char const *str)
{
	int i = 0;
	int nb = 0;
	while (str[i] != '\0')
	 {
		while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') ||  (str[i] >= '0' && str[i] <= '9'))
			i++;
		nb++;
		i++;
	}
	return (nb);
}

char **my_str_to_word_array(char const *str)
{
	int nb = find_word(str);
	char **array = malloc(sizeof(char *) * (nb + 1));
	int i = 0;
	int character;
	int key = 0;
	
	while (str[i] != '\0') 
	{
		array[key] = malloc(sizeof(char **) * my_strlen(str));
		while(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') ||  (str[i] >= '0' && str[i] <= '9')))
			i++;
		character = 0;
		while((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') ||  (str[i] >= '0' && str[i] <= '9')) 
		{
			array[key][character] = str[i];
			i++;
			character++;
		}
		key++;
	}
	array[key] = 0;
	return array;
}
