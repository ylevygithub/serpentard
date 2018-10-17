##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	*.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	test

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re:	fclean all

auteur:
	echo $(USER) > auteur
