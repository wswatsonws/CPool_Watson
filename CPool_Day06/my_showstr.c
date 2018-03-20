#include<stdio.h>
#include<unistd.h>

int my_putchar(char c);

char *my_strlowcase(char *str ) ;

int my_putstr(char const *str)
{
	int len=0;
	char  const *n;
	n = str;
	while((*n++))
	{
		len++;
	}
	write(1,str,len);
	return 0;
}

int my_strlen(char const *str)
{
	int len = 0;
	while(( *str++ ))
	{
		len++;
	}
	return len;
}

char tohex(int n)
{
	if(n>=10 && n<=15)
	{
		return 'A'+n-10;
	}
	return '0'+n;
}

void dec_to_hex(int n,char *buf)
{
	int i=0;
	int mod;
	while(n)
	{
		mod = n%16;
		buf[i++]=tohex(mod);
		n=n/16;
	}
	int j,k;
	for(j=0,k=i-1;j<i/2;j++,k--)
	{
		char temp;
		temp = buf[j];
		buf[j] = buf[k];
		buf[k] = temp;
	}
	buf[i]='\0';
}

int my_showstr(char const *str)
{
	int len = my_strlen(str);
	int i = 0;
	if(len != 0)
	{
		while(str[i] != '\0')
		{
			if (str[i] < 32 || str[i] > 127)
			{
				char a[len];
				dec_to_hex(str[i],a);
				if (my_strlen(a) ==1)
				{
					my_putchar('\\');
					my_putchar('0');
					my_strlowcase(a);
					my_putstr(a);
				}
				else
				{
					my_putchar('\\');
					my_strlowcase(a);
					my_putstr(a);
				}
			}
			else
			{
				my_putchar(str[i]);
			}
			i++;
		}
	}
	return 0;
}

