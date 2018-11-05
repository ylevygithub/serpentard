/*
** EPITECH PROJECT, 2018
** functions for infinadd
** File description:
** there are the functions I need for the my_infinadd.c 
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int nb;

    nb = 0;
    while (str[nb] != '\0')
        nb++;
    return (nb);
}

char val_ascii(char c)
{
    return (c - '0');
}
