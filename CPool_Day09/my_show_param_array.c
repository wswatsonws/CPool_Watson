#include <stdio.h>
#include <unistd.h>
#include "include/my.h"

int my_show_param_array(struct info_param const *par)
{
	int len = 0;
	while(par[len].str != '\0')
		len++;
	for(int i = 0; i < len - 1; i++) 
	{
		my_putstr(par[i].str);
		my_putchar('\n');
		my_put_nbr(par[i].length);
		my_putchar('\n');
		my_show_word_array(par[i].word_array);
	}
	return 0;
}
