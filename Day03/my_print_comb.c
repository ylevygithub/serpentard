/*
** EPITECH PROJECT, 2018
** my_print_comb
** File description:
** my_print_comb
*/

void    my_putchar(char c);

int    my_print_tmp(char a, char b, char c)
{
    if (a != '7') {
        my_putchar(a);
        my_putchar(b);
        my_putchar(c);
        my_putchar(',');
        my_putchar(' ');
    }
    else {
        my_putchar(a);
        my_putchar(b);
        my_putchar(c);
    }
    return 0;
}

int    my_print_comb(void)
{
    char a = '0';
    char b = '1';
    char c = '2';
    while (a <= '7')
    {
        while (b <= '8')
        {
            while (c <= '9')
            {
                if (a < b && b < c)
                {
                    my_print_tmp(a, b, c);
                }
                c++;
            }
            c = '0';
            b++;
        }
        b = '0';
        a++;
    }
    return 0;
}
