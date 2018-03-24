#include <stdio.h>
#include <stdlib.h>
#include "include/my.h"

int my_sort_word_array(char **tab)
 {
	int i = 0;
	int j = 0;
	char* a;
	char* b;
	int size_array = 0;
	while(tab[i]!=NULL) 
	{
		j = 0;
		while(tab[i][j]!='\0') 
		{
			size_array = size_array+1;
			j = j+1;
		}
		i = i+1;
	}
	int nb_words = i ;
	j = 0;
	i = 0;
	while (j < nb_words - 1 ) 
	{
		i = j;
		while (i < nb_words - 1 )
		{
			a = tab[i];
			b = tab[i+1];
			if (my_strcmp(a,b) > 0)
			{
				tab[i] = b;
				tab[i+1] = a;
			}
			i = i+1;
		}
		if (my_strcmp(tab[j],tab[j+1])<0) 
		{
			j = j+1;
		} 
	}

	return(0);
}
