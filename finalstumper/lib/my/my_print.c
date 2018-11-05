/*
** EPITECH PROJECT, 2018
** my_print
** File description:
** display
*/

#include "../../rush3.h"
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
}

void my_put_nbr(int nb)
{
    int nombre;

    if(nb < 0) {
        nb = -1 * nb;
        my_putchar('-');
    }
    if(nb > 9) {
        my_put_nbr(nb / 10);
    }
    nombre = nb % 10 + 48;
    my_putchar(nombre);
}
