#include <stdio.h>
#include <stdlib.h>

char *my_strcpy(char *dest, char const *src);

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
	char*p = malloc(sizeof(char)*(my_strlen(src) + 1));  
	my_strcpy(p, src);
	return p;  
}
