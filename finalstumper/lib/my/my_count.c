/*
** EPITECH PROJECT, 2018
** my_count
** File description:
** my count
*/

#include "../../rush3.h"

int my_strlen(char *str)
{
    int count = 0;

    while (str[count]) {
        count++;
    }
    return (count);
}

int my_line_size(char *str)
{
    int size = 0;

    while (str[size] != '\n' && str[size]) {
        size++;
    }
    return (size);
}

int my_up_size(char *str)
{
    int i = 0;
    int size = 0;

    while (str[i]) {
        if (str[i] == '\n')
            size = size + 1;
        i++;
    }
    return (size);
}
