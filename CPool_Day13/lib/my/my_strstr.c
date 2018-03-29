#include <stdio.h>  

char * my_strstr(char * str , char const *to_find)
{
	int nLen = 0;
	if ( '\0' == *to_find )
	{
		return  ( char * )str;  
	}
	else  
	{
		while ( '\0' != *str )  
		{
			while ( *( str + nLen ) == *( to_find + nLen ) )      
			{
				if ( '\0' == *( to_find + nLen + 1 ) )  
				{  
					return  ( char * )str;  
				}
					nLen++;  
			}
				nLen = 0;
				str++;
		}  
		return  NULL;  
	}
}
