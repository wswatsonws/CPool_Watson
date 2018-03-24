#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"
#include "../include/my_opp.h"

t_operator *my_fill_operators()
 {
	int (*liste_operations[5])(int,int) = {my_add,my_sub, my_mul, my_div, my_mod};
	int i = 0;
	t_operator *s = malloc((5) * sizeof(t_operator));
	char* operators = "+-*/%";

	while (i<5) 
	{
		s[i].char_op = operators[i];
		s[i].operation = liste_operations[i];
		i =i+1;
	}
	return(s);
 }

int main(int argc, char ** argv) 
{
	int i = 0;
	int (* fcn)(int, int);
	int result = 0;
	t_operator *struc_operators = my_fill_operators();
	if (argc != 4)
	{
		my_putstr("Error: wrong arguments number\n");
	}
	 else 
	{
		int value1 = my_getnbr(argv[1]) ;
		int value2 = my_getnbr(argv[3]) ;
		char operator = argv[2][0];
		while(i<5) 
		{
			if (operator == struc_operators[i].char_op) 
			{
				fcn = struc_operators[i].operation;
				result = (*fcn)(value1,value2);
				i = 5;
			}
			i = i+1;
		}
		if(result == 0) 
		{
			my_putstr("Error: ");
			my_usage();
		}
		if(result != 0 && result != 84)
		{
			my_put_nbr(result);
			my_putchar('\n');
		}
	}
	return(0);
}
