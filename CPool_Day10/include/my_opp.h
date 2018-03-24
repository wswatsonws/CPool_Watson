#ifndef __MY_OPP_H__
#define __MY_OPP_H__

int my_add(int x, int y) ;
int my_sub(int x, int y) ;
int my_mul(int x, int y) ;
int my_div(int x, int y) ;
int my_mod(int x, int y) ;

char my_usage() ;

typedef struct operator {
	char char_op;
	int(* operation)(int x, int y);
} t_operator;

#endif
