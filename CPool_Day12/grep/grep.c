#include "../include/my.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

int match(char const *s1, char const *s2)
{
	if (*s2 == '\0') 
	{
		if (*s1 == '\0')
			return 1;
		return 0;
	}
	for (; (*s2 == '*') && (*(s2 + 1) == '*'); ++s2);
	if (*s1 == *s2)
		return match((s1 + 1), (s2 + 1));
	if (*s1 != *s2) 
	{
		if (*s2 == '*' && (match((s1 + 1), s2) == 1 || match(s1, (s2 + 1)) == 1))
			return 1;
		else
			return 0;
	}
}

int match_text(const char *text, const char *line)
{
	if (my_strstr((char *)line, (char *)text) != NULL) 
	{
		return 0;
	}
	return -1;
}

int get_line(int fno, char *buff, int len, int *clen)
{
	int i;
	char c;
	for (i = 0; i < len; i++) 
	{
		if (read(fno, &c, 1) > 0) 
		{
			if (c != '\n') 
			{
				buff[i] = c;
				continue;
			}
			*clen = i;
			return 0; 
		}
		*clen = i;
		return 2; 
	}
	*clen = i;
	return 1; 
}

int do_grep(int fno, const char *text)
{
	char buff[256];
	long lineno;
	int len;
	int retval;
	lineno = 1;
	do 
	{
		retval = get_line(fno, buff, 256, &len);
		buff[len] = '\0';
		if (match_text(text, buff) == 0) 
		{
			my_putstr(buff);
			my_putchar('\n');
		}
		if (retval == 0) 
		{
			lineno++;
		}
	}while (retval != 2);
	return 0;
}

int main(int argc, const char *argv[])
{
	if (argc <= 2) 
	{
		do_grep(0, argv[1]);
		return 0;
	}
	else if (argc >= 3)
	{
		for(int i = 2; i < argc; i++)
		{
			int fno = open(argv[i], O_RDONLY);
			if (fno != -1) 
			{
				do_grep(fno, argv[1]);
				close(fno);
			}
			else if(match(argv[i],"/root*") == 1)
			{
				my_putstr("grep :");
				my_putstr(argv[i]);
				my_putstr(": Permission denied \n");
			}
			else 
			{
				my_putstr("grep :");
				my_putstr(argv[i]);
				my_putstr(": No such file or directory \n");
			}
		}
	}
	return 0;
}
