/*
** EPITECH PROJECT, 2018
** my_print_revalpha
** File description:
** my_print_revalpha
*/

void    my_putchar(char c);

int    my_print_revalpha(void)
{
    char z;

    z = 'z';
    while (z >= 'a') {
        my_putchar(z);
        z--;
    }
    return 0;
}
