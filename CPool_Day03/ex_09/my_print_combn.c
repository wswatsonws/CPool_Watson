#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

typedef struct List
{
	struct List *next;
	struct List *prev;
	int val;
}	List;
int list_size(List *L);
void free_list(List *L);
void display_list_from_beginning(List *list);
List *push_front_item(List *L,int n);
List *push_back_item(List *L,int n);
int my_putchar(int c);
int my_putnumber(int n);

List *push_front_item(List *L,int n)
{
	List *s;
	s=(List *)malloc(8);
	s->val=n;
	if(L==NULL)
	{
		L=s;
	}
	else
	{
		s->next=L;
		L->prev=s;
		L=s;
	}
	return L;
}

List *push_back_item(List *L,int n)
{

	List *s,*r,*po;
	po=L;
	s=(List *)malloc(8);
	s->next=NULL;
	s->prev=NULL;
	s->val=n;
	if(L==NULL)
	{
		L=s;
	}
	else
	{
		while(po->next!=NULL)
		{
			po=po->next;
		}
		if(po->next==NULL)
		{
			po->next=s;
			r=po->next;
		}
		else
		{
			r=po->next;
			r->next=s;
			s->prev=r;
			r=r->next;
		}
}
	return L;
}

int list_size(List *L)
{
	int len=0;
	while(L!=NULL)
	{
		len++;
		L=L->next;
	}
	return len;
}

void free_list(List *L)
{
	List *p=NULL;
	while(L)
	{
		p=L;
		L=L->next;
		free(p);
	}
}
int my_putchar(int c)
{
	write(1,&c,1);
	return 0;
}

void my_putchar2(char c)
{
	write(1, &c, 1);
}
int my_putnumber(int n)
{	
	int k;
	if(n>=10)
	{
		my_putnumber(n/10);	
		n=n%10;
	}
	if(n<10&&n>=0){
		my_putchar(n+'0');
	}
	if(n<0)
	{
		k=-1*n;
		my_putchar('-');
		if(k>=10)
		{
			my_putnumber(k/10);	
			k=k%10;
		}
		if(k<10&&k>=0)
		{
			my_putchar(k+'0');
		}	
	}
	return 0;
}
void display_list_from_beginning(List *list)
{
	List *L=list;
	while(L)
	{
		my_putnumber(L->val);
		//my_putchar('\n');
		L=L->next;
	}
}



int my_print_combn(int n)
{
	List *my_list=NULL;
	int i=0;
	while(i<n)
	{
		
		my_list=push_back_item(my_list,i);
		i++;
		
		//display_list_from_beginning(my_list);
	}
	//my_list=push_back_item(my_list,++k);
	display_list_from_beginning(my_list);
	my_putchar2(' ');
	/*int num = 0;
	int a,b,c,d = 0;
	while(num <= 9999)
	{
		//ge wei
		a = num / 1 % 10;
		//shi wei 
		b = num / 10 % 10;
		//bai wei
		c = num / 100 % 10;
		//qian wei 
		d = num / 1000 % 10;
		if(d*10+c < b*10+a)
		{
			char m = a + '0';
			char n = b + '0';
			char o = c + '0';
			char p = d + '0';
			if(d!='9' && c!='8' && b!='9' && a!='9')
			{
				my_putchar2(p);
				my_putchar2(o);
				my_putchar2(n);
				my_putchar2(m);
				my_putchar2(',');
				my_putchar2(' ');
			}
			
		}
		num++;
	}
	my_putchar2('9');
	my_putchar2('8');
	my_putchar2('9');
	my_putchar2('9');*/
	return 0;
}
int main()
{
	my_print_combn(3);
	return 0;
}
