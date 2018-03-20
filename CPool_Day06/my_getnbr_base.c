#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int my_strlen(char const *str)
{
	int len = 0;
	while(( *str++ ))
	{
		len++;
	}
	return len;
}

int my_compute_power_rec(int nb , int p ) 
{
	int result;
	if (p==0)
		result = 1;
	if (p < 0)
		result = 0;
	if (p > 0)
	{
			result=my_compute_power_rec(nb,p-1)*nb;
	}
	return result;
}

int is_include(char c , char const *str)
{
	for(int i =0 ;str[i] != '\0' ;i++)
	{
		if(c == str[i])
			return 1;
	}
	return 0;
}

void my_putchar(char *s)
{
    write(1, s, my_strlen(s));
}

int my_getnbr_base(char const * str , char const *base)
{
   // int n=strlen(base);
	int i;
	long c = 0;
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
		my_putchar("-");
		
    for(i = j - 1, j = 0;i >= a;i--,j++)
    {
        int tmp;
        if(str[i] >= '0' && str[i] <= '9')
            tmp = (str[i]-'0');
        else
            tmp = (str[i]-'A')+10;
     
        c=c+(long)(tmp *my_compute_power_rec(n ,j));
    }
    if(flag == -1)
	{
		if((unsigned)c > my_compute_power_rec(2,31)  )
			return 0;
	}
    if((unsigned)c > INT_MAX)
		return 0;
	return c;
    
}

int main()
{
    long c;
    char *p="80000000";
    char *base="0123456789abcdef";
    c=my_getnbr_base(p, base);
    printf("%ld",c);
    return 0;
    
}

