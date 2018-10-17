/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** my_put_nbr
*/

void my_tmp(void)
{
        my_putchar('-');
        my_putchar('2');
        my_putchar('1');
        my_putchar('4');
        my_putchar('7');
        my_putchar('4');
        my_putchar('8');
        my_putchar('3');
        my_putchar('6');
        my_putchar('4');
        my_putchar('8');
}

int my_put_nbr(int nb)
{
    int i;
    if(nb < 0 && nb != -2147483648) {
        my_putchar('-');
        i = -nb;
        my_put_nbr(i);
    }
    else if (nb == -2147483648) {
        my_tmp();
    }
    else {
        i = nb;
        if (i >= 10)
            my_put_nbr(i / 10);
        my_putchar(i % 10 + '0');
    }
    return 0;
}
