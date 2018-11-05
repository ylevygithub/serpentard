##
## EPITECH PROJECT, 2018
## make
## File description:
## make
##

SRC     =       aller.c \
		main.c

OBJ     =       $(SRC:.c=.o)

NAME    =       calc

all:    $(NAME)

$(NAME):        $(OBJ)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
