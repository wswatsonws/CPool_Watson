#include<stdio.h>
#include<unistd.h>

int my_putchar( char c );

int cal_lastraw_starnum( int size )
{
	if( size != 0 )
	{
		int num;
		if(size < 1)
			num = 0;
		if(size == 1)
			num = 7;
		else
		{
			int i = size / 2;
			num = cal_lastraw_starnum( size - 1 ) + ( size +2 - i ) * 2;
		}	
		return num;
	}
	else 
		return 0;
}

void print_trunk(int size)
{
	int num = cal_lastraw_starnum( size );
	if(size % 2 ==0)
	{
		for(int i = 1; i <= size; i++ )
		{
			for(int j = 1;j <= ( num - ( size + 1 ) ) / 2; j++)
			{
				my_putchar(' ');
			}
			for( int j = 1; j <= size + 1; j++ )
			{
				my_putchar('|');
			}
			my_putchar('\n');
		}
	}
	else
	{
		for(int i = 1; i <= size; i++ )
		{
			for(int j = 0; j < ( (num - size) / 2); j++)
			{
				my_putchar(' ');
			}
			for(int j = 1; j <= size; j++)
			{
				my_putchar('|');
			}
			my_putchar('\n');
		}
	}
}

int cal_first_rawspace_num( int size )
{
	if( size != 0 )
	{
		if( size == 1 )
			return 0;
		if( size == 2 )
			return 3;
		return cal_first_rawspace_num( size - 1 ) +( ( size - 1 ) / 2) +3;
	}
	else
		return 0;
}

void print_trapzoid( int layer, int space )
{
	if( layer != 0)
	{
		int last_line = cal_lastraw_starnum(layer);
		int first_line = last_line - 2*(layer + 2);
		for(int i = 0; i < layer + 3; i++)
		{
			for( int j = 0; j <= ( last_line - first_line ) / 2 - i - 1 + space; j++ )
				my_putchar(' ');
			for( int k = 0 ;k < 2 * i + first_line ; k++ )
				my_putchar('*');
			my_putchar('\n');
		}
	}
}

void print_star( int size )
{
	if(size != 0)
	{
		if(size == 1)
			print_trapzoid( 1, 0 );
		if(size > 1)
		{
			int space = cal_first_rawspace_num( size );
			int i = 1;
			while(i <= size)
			{
				print_trapzoid( i, space );
				i++;
				space = space - ( i + 1 ) / 2 - 2;
			}	
		}	
	}
}

void tree( int size )
{
	if( size != 0 )
	{
		print_star( size );
		print_trunk( size );
	}
}

