 /*
** EPITECH PROJECT, 2018
** infinadd.c
** File description:
** that is the function who manage the summands for the eval_expr function
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "string.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int summands(char **str)
{
    int i, j, a, b;
    i=j=a=b= 0;
    char *result;
    int ret;

    if (str[i] == '+') {
        a = str[i - 1];
        b = str[i + 1];
        result[ret] = a + b;
    }
    return(result);
}

int main(int ac, char **av)
{
    if (ac == 3)
        summands(av[1], av[2]);
    return 0;
}
