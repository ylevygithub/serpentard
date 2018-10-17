##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

CFLAGS +=	-I include -L -l

SRC	=	cat.c	\
		my_putstr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	cat

all:	$(NAME)

$(NAME): $(SRC)	$(OBJ)
	gcc -o $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re:	fclean all
