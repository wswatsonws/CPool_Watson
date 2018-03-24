#include <stdio.h>
#include <stdlib.h>	
#include "../include/my.h"

int my_add(int x, int y) 
{
	return(x+y);
}

int my_sub(int x, int y) 
{
	return(x-y);
}

int my_mul(int x, int y) 
{
	return(x*y);
}

int my_div(int x, int y)
 {
	if(y != 0) 
	{
		return(x/y);
	}
	 else
	  {
		my_putstr("Stop: division by 0\n");
		return(84);
	}
}

int my_mod(int x, int y) 
{
	if(y != 0) 
	{
		return(x%y);
	}
	 else
	{
		my_putstr("Stop: modulo by 0\n");
		return(84);
	}	
}

void my_usage()
 {
	my_putstr("only [ + - * / % ] are supported\n");
}



