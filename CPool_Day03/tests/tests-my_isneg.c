#include<stdio.h>
#include<unistd.h>
#include "tests-my_isneg.h"

int main(void)
{
	my_isneg(0);
	my_isneg(21);
	my_isneg(-21);
	return (0);
}
