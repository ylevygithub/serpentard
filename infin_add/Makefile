##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	functions_for_summands.c	\
		summands.c

OBJ	=	$(SRC:.c=.o)

NAME	=	eval_expr

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re:	fclean all
