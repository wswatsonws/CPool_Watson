#include <stdio.h>
#include "../include/my.h"

int nmatch ( char const * s1 , char const * s2 ) ;
int main(int argc, const char * argv[]) 
{
	printf("Match times: %d\n",nmatch(argv[1], argv[2]));
	return 0;
}
