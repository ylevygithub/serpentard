/*
** EPITECH PROJECT, 2018
** rush3
** File description:
** rush3
*/

#include "rush3.h"
#include "buff_size.h"
#include <unistd.h>

int my_display_case(int line_size, int up_size)
{
    my_putstr("[rush1-5] ");
    my_put_nbr(line_size);
    my_putchar(' ');
	my_put_nbr(up_size);
    my_putchar('\n');
    return (0);
}

void rush3(char *str)
{
    int line_size = my_line_size(str);
    int up_size = my_up_size(str);

    (my_strlen(str) == 0) ? my_putstr("none\n") : 1;
    my_display_size_for_one(str, line_size, up_size);
    if (line_size == 1 && up_size > 1) {
        display_size_for_up_lane(str, line_size, up_size);
    }
    if (line_size > 1 && up_size == 1) {
        display_size_for_up_lane(str, line_size, up_size);
    }
    if (line_size > 1 && up_size > 1) {
        display_total_size(str, line_size, up_size);
    }
}

int main(void)
{
    char buff[BUFF_SIZE + 1];
    int offset = 0;
    int len;

    while ((len = read(0, buff + offset, BUFF_SIZE - offset)) > 0) {
        offset = offset + len;
    }
    buff[offset] = '\0';
    if (len < 0) {
        return (84);
    }
    rush3(buff);
    return (0);
}
