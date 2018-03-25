#include <stdio.h>
#include "../include/my.h"
int match(char const *s1 , char const *s2 ) ;
int main(int argc, const char * argv[]) 
{
	my_put_nbr(match(argv[1], argv[2]));
	my_putchar('\n');
	return 0;
}
