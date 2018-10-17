/*
** EPITECH PROJECT, 2018
** my_print_digits
** File description:
** my_print_digits
*/

void    my_putchar(char c);

int    my_print_digits(void)
{
    char a;

    a = '0';
    while (a <= '9') {
        my_putchar(a);
        a++;
    }
    return 0;
}
