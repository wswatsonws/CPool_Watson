#include <stdio.h>

int my_strlen( char const *str);

char * my_revstr(char *str)
{
	int len = my_strlen(str);
	char *start = str;
	char *end = str + len -1;
	char ch;
	if(str != NULL)
	{
		while(start < end)
		{
			ch = *start;
			*start++ = *end;
			*end-- = ch;
		}
	}
	return str;
}

union swap_color
{
	int color;
	char ccolor[4];
};

int swap_endian_color(int color)
{
	swap_color *my_color;
	my_color = malloc(sizeof(union swap_color) * (color + 1));
	my_revstr(my_color.ccolor);
	return 0;
}
