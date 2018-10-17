##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

CFLAGS =	-Wall -Wextra -Werror

SRC	=	cat.c

LDFLAGS = 	-L./lib/my -lmy

OBJ	=	$(SRC:.c=.o)

NAME	=	cat

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -c lib/my/*.c
	ar rc lib/my/libmy.a *.o
	gcc -o $(NAME) $(SRC) $(CFLAGS) $(LDFLAGS)
clean:
	rm -f $(NAME)
	rm lib/my/libmy.a
	rm *.o
fclean: clean
	rm -f $(NAME)
re:	fclean all
