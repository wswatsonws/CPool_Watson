#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int my_strlen(char const *str);
void my_putchar(char c);
int my_compute_power_rec(int nb , int p ) ;

int is_include(char c , char const *str)
{
	for(int i =0 ;str[i] != '\0' ;i++)
	{
		if(c == str[i])
			return 1;
	}
	return 0;
}

int my_getnbr_base(char const * str , char const *base)
{
	int i;
	int c = 0;
	int flag = 1;
	int j = my_strlen(str);
	int n = my_strlen(base);
	if(j ==0 || n == 0)
		return 0;
	int a = 0;
	
	for(int y = 0; base[y] != '\0';y++)
	{
		for(int x = 0; x< y; x++)
		{
			if(base[x] == base[y])
				return 0;
		}
	}
	
	for(int u =0 ;str[u] != '\0';u++ )
	{
		if(is_include(str[u] , base) == 0 && (str[u] != '-' && str[u] != '+'))
			return 0;
		
	}
	
	while(str[a] == '-' || str[a] == '+')
	{
		if(str[a] == '-')
			flag = flag *-1;
        a++;
    }
    
    if(flag == -1)
		my_putchar('-');
		
    for(i = j - 1, j = 0;i >= a;i--,j++)
    {
        int tmp;
        if(str[i] >= '0' && str[i] <= '9')
            tmp = (str[i]-'0');
        else
            tmp = (str[i]-'A')+10;
     
        c=c+(int)(tmp *my_compute_power_rec(n ,j));
    }

    if((unsigned)c > INT_MAX)
		return 0;
	return c;
    
}


