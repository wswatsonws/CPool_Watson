#include<stdio.h>
#include<unistd.h>
#include "tests-my_put_nbr.h"

int main(void)
{
	my_put_nbr(42);
	my_put_nbr(0);
	my_put_nbr(-2147483648);
	return 0;
}
