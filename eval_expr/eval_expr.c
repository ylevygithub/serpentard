/*
** EPITECH PROJECT, 2018
** evalexpr
** File description:
** It takes a string as parameter, which represents a mathematical expression, evaluates this expression and
returns the result as an integer.
*/

#include <unistd.h>
#include <stdlib.h>
#include "string.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int eval_expr(char const *str)
{
    int i = 0;
    int nbr;
    int indicator = 0;
    char *dest;
    
    dest = malloc(dest * sizeof (str + 1));
    while (str) {
        if (str[i] != '(') {
            i++;
            if (str == nbr) {
                number(str);
                indicator = 1;
                i++;
                if (str[i] == '*' || str[i] == '/' || str[i] == '%') {
                    factors(str);
                    indicator = 1;
                    i++;
                    if (str[i] == '+' || str[i] == '-') {
                        summands(str);
                        indicator = 1;
                        i++;
                        if (str[i] == '\0')
                           
                }    
            }
        }
    }
    if (indicator == 0)
        return(dest);
    eval_expr(dest);
}

int main(int ac, char **av)
{
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}
