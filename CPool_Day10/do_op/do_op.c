#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"

int do_op(char *nb1, char *op, char *nb2)
{
	int	n1;
	int	n2;
	int	r;
	int len1 = my_strlen(nb1);
	int len2 = my_strlen(nb2);
	if( !((nb1 == NULL || nb2 == NULL) || (len1 ==0 || len2 ==0)) )
	{
		if(  (op[0] == '%' || op[0] == '*' || op[0] == '+' || op[0] == '-'  || op[0] == '/')  )
		{
			n1 = my_getnbr(nb1);
			n2 = my_getnbr(nb2);
			if (op[0] == '+')
				r = n1 + n2;
			if (op[0] == '-')
				r = n1 - n2;
			if (op[0] == '*')
				r = n1*n2;
			if (op[0] == '/')
			{
				if(n2 == 0)
				{
					my_putstr("Stop: division by zero");
					my_putstr("\n");
					return (84);
				}
				else
					r = n1 / n2;
			}
			if (op[0] == '%')
			{
				if(n2 == 0)
				{
					my_putstr("Stop: modulo by zero");
					my_putstr("\n");
					return 84;
				}
				else
					r = n1 % n2;
			}
			if( !( (op[0] == '/' || op[0] == '%') && (n2 == 0) ) )
			{
				my_put_nbr(r);
				my_putstr("\n");
				return 0;
			}
		}
		else
		{
			my_put_nbr(0);
			my_putstr("\n");
			return 84;
		}
	}
	return 84;
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if(do_op(argv[1], argv[2], argv[3]) == 0)
			return 0;
		return 84;
	}
	return 84;
}
