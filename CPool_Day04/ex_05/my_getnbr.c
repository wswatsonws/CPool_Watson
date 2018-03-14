#include<stdio.h>
#include<unistd.h>

int my_atoi(const char *str);

int my_strlen( char const *str);

int my_strcmp(const char *s1,const char *s2);

char * my_evil_str(char *str);

int my_getnbr(char const  *str) 
{
	int len = my_strlen(str);
	int i = 0;
	int j = 0;
	int countnb = 0;
	int countmi = 0;
	int countpl = 0;
	while(i < len)
	{
		if(str[i] == '+')
			countpl++;
		if(str[i] == '-')
			countmi++;
		if(str[i] >='0' && str[i] <= '9' )
		{
			countnb++;
			if(str[i+1] < '0' || str[i+1] > '9')
				break;
		}
		if( (!(str[i] >='0' && str[i] <= '9')) && (str[i] != '-' && str[i] != '+') )
			break;
		i++;
	}
	char store[countnb];
	store[countnb] = '\0';
	int count = countnb-1;
	while(j <= i)
	{
		if(str[j] >= '0' && str[j] <= '9')
		{
			store[count] = str[j];
			count--;
		}
		j++;
	}
	char *stm = my_evil_str(store);
	int ret = my_atoi(stm);
	if(my_strcmp(store,"2147483648") == 1)
		ret =0;
	if(my_strlen(store) >= 10)
		ret = 0;
	if (countmi % 2 == 1)
		ret = ret * (-1);
	printf("%d",ret);
	return 0;
}
