SRC	= ${wildcard *.c}	

OBJ	=	$(SRC:.c=.o)

NAME	=	do-op

all:	$(NAME)

${NAME}:	$(OBJ)
	gcc -o $(NAME) do_op.c -L ../lib -lmy
	
clean:
	rm -f *.o

fclean:clean
			rm -f $(NAME)
			
re:	fclean all

