#include <stdio.h>
#include "include/my.h"

int nmatch ( char const * s1 , char const * s2 ) 
 {
	if (! *s2) 
	{
		return (*s1) ? 0 : 1;
	}
	if (*s2 == '*') 
	{
		char const * rest = s1;
		unsigned count = 0;
		while (*rest) 
		{
			count += nmatch(rest, s2 + 1);
			++rest;
		}
		count += nmatch(rest, s2 + 1);
		return count;
	}
	if (! *s1) 
	{
		return 0;
	}
	if (*s2 == *s1) 
	{
		return nmatch(s1 + 1, s2 + 1);
	}
	else 
	{
		return 0;
    }
}
