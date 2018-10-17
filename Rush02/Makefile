##
## EPITECH PROJECT, 2018
## rush2
## File description:
## Makefile
##

CFLAGS += 	-I include

SRC	=	rush2.c	\
		print.c

OBJ	=	$(SRC:.c=.o)

NAME	=	rush2

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
