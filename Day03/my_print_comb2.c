/*
** EPITECH PROJECT, 2018
** my_print_comb2
** File description:
** my_print_comb2
*/

void    my_putchar(char c);

int    my_print_comb2(void)
{
    int ndg = 0;
    int ndd = 1;
    while (ndg <= 98) {
        while (ndd <= 99) {
            my_putchar(ndg / 10 + '0');
            my_putchar(ndg % 10 + '0');
            my_putchar(' ');
            my_putchar(ndd / 10 + '0');
            my_putchar(ndd % 10 + '0');
            if (ndg == 98)
                return 0;
            ndd++;
            my_putchar(',');
            my_putchar(' ');
        }
        ndg++;
        ndd = ndg + 1;
    }
    return 0;
}
