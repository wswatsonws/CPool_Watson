SRC	= ${wildcard *.c}	

OBJ	=	$(SRC:.c=.o)

NAME	=	match

all:	$(NAME)

${NAME}:	$(OBJ)
	gcc -o match *.c test_files/match_main.c -I./include -L./lib/my -lmy
	gcc -o nmatch *.c test_files/nmatch_main.c -I./include -L ./lib/my -lmy
	
clean:
	rm -f *.o

fclean:clean
			rm -f match
			rm -f nmatch
			
re:	fclean all

