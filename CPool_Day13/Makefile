SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	libbtree.a

all:	$(NAME)

${NAME}:	$(OBJ)
	cd ./lib/my/&&make
	#gcc -o $(NAME) $(OBJ) -I../include -L../lib/my -lmy
	gcc -c  $(SRC)
	ar rc $(NAME) $(OBJ)

	
clean:
		rm -f *.o

fclean:	clean
				rm -f $(NAME)

re: fclean all
