#include <stdio.h>
#include "include/my.h"

int match(char const *s1 , char const *s2 ) 
{
	int i;
	int i2;
	i = 0;
	i2 = 0;
	while (s1[i] != '\0')
	{
		while (s1[i] != s2[i2] && s2[i2] == '*')
		{
			while (s2[i2] == '*')
			{
				i2 = i2 + 1;
			}
		i = i + 1;
		}
		if (s1[i] != s2[i2] && s2[i2] != '*')
			return (0);
		while (s1[i] == s2[i2])
		{
			i = i + 1;
			i2 = i2 + 1;
		}
	}
	return (1);
}
