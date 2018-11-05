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

int summands(char *s1, char *s2)
{
    int len1 = strlen(s1) - 1;
    int len2 = strlen(s2) - 1;
    int i, j, a, b;
    i=j=a=b= 0;
    char *result;
    int ret;

    result = malloc(ret + 1);
    while (s1[i] || s2[j]) {
        a = val_ascii(s1[len1]);
        b = val_ascii(s2[len2]);
        result[ret] = val_ascii_neg(a + b);
        write(1, &result[ret], 1);
        i--;
        j--;
        ret = 0;
    }
    return(0);
}

int main(int ac, char **av)
{
    if (ac == 2)
        summands(av[1], av[2]);
    my_putchar('\n');
    return 0;
}
