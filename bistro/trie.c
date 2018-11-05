/*
** EPITECH PROJECT, 2018
** trie
** File description:
** trie
*/

#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}

int my_strlen(char *str)
{
        int len;

        len = 0;
        while(str[len] != '\0')
        {
                len = len + 1;
        }
        return (len);
}

char *number(char **str)
{
    char *endptr;
    endptr = *str;
    int i = 0;
    int j = 0;
    int result = 0;
    char *stock;
    int len = my_strlen(endptr);
    stock = malloc(sizeof(char) * len);    

    while (endptr[i] != '\0') {
	if (endptr[i] == '+' || endptr[i] == '-' || endptr[i]  == '*' || endptr[i] == '%' || endptr[i] == '/' || endptr[i] == '(' || endptr [i] == ')') {
	    stock[j] = endptr[i];
	    j++;
	}
        if (endptr[i] >= '0' && endptr[i] <= '9') {
	    stock[j] = endptr[i];
	    j++;
	}
	i++;
    }
    stock[i] = '\0';
    return (stock);
}

int main(int ac, char **av)
{
    if (ac > 0)
	my_putstr(number(&av[1]));
    my_putchar('\n');
    return(0);
}
