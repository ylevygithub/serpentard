/*
** EPITECH PROJECT, 2018
** my_display
** File description:
** display all
*/

#include "../../rush3.h"

int my_display_size_for_one(char *str, int line_size, int up_size)
{
    if (line_size == 1 && up_size == 1) {
        (str[0] == 'o') ? my_putstr("[rush1-1] 1 1") : 1;
        if (str[0] == '*')
            my_putstr("[rush1-2] 1 1");
        if (str[0] == 'B')
            my_putstr("[rush1-3] 1 1 || [rush1-4] 1 1 || [rush1-5] 1 1");
        my_putchar('\n');
    }
    return (0);
}

void display_same_up_lane(int line_size, int up_size)
{
    my_putstr("[rush1-3] ");
    my_put_nbr(line_size);
    my_putchar(' ');
    my_put_nbr(up_size);
    my_putstr(" || ");
    my_putstr("[rush1-4] ");
    my_put_nbr(line_size);
    my_putchar(' ');
    my_put_nbr(up_size);
    my_putstr(" || ");
    my_putstr("[rush1-5] ");
    my_put_nbr(line_size);
    my_putchar(' ');
    my_put_nbr(up_size);
    my_putchar('\n');
}

int display_size_for_up_lane(char *str, int line_size, int up_size)
{
    if (str[0] == 'o') {
        my_putstr("[rush1-1] ");
        my_put_nbr(line_size);
        my_putchar(' ');
        my_put_nbr(up_size);
        my_putchar('\n');
    }
    if (str[0] == '*') {
        my_putstr("[rush1-2] ");
        my_put_nbr(line_size);
        my_putchar(' ');
        my_put_nbr(up_size);
        my_putchar('\n');
    }
    if (str[0] == 'B') {
        display_same_up_lane(line_size, up_size);
    }
    return (0);
}

int display_alpha_square(char *str, int line_size, int up_size)
{
    int total_size = my_strlen(str) - 2;

    if (str[0] == 'A' && str[line_size - 1] == 'A' && str[total_size] == 'C') {
        my_putstr("[rush1-3] ");
        my_put_nbr(line_size);
        my_putchar(' ');
        my_put_nbr(up_size);
        my_putchar('\n');
    }
    if (str[0] == 'A' && str[line_size - 1] == 'C' && str[total_size] == 'C') {
        my_putstr("[rush1-4] ");
        my_put_nbr(line_size);
        my_putchar(' ');
        my_put_nbr(up_size);
        my_putchar('\n');
    }
    if (str[0] == 'A' && str[line_size - 1] == 'C' && str[total_size] == 'A') {
        my_putstr("[rush1-5] ");
        my_put_nbr(line_size);
        my_putchar(' ');
        my_put_nbr(up_size);
        my_putchar('\n');
    }
    return (0);
}


int display_total_size(char *str, int line_size, int up_size)
{
    if (str[0] == 'o') {
        my_putstr("[rush1-1] ");
        my_put_nbr(line_size);
        my_putchar(' ');
        my_put_nbr(up_size);
        my_putchar('\n');
    }
    if (str[0] == '/') {
        my_putstr("[rush1-2] ");
        my_put_nbr(line_size);
        my_putchar(' ');
        my_put_nbr(up_size);
        my_putchar('\n');
    }
    display_alpha_square(str, line_size, up_size);
    return (0);
}
