/*
** EPITECH PROJECT, 2018
** my_print_alpha
** File description:
** display alphabet
*/

void    my_putchar(char c);

int    my_print_alpha(void)
{
    char a;

    a = 'a';
    while (a <= 'z') {
        my_putchar(a);
        a++;
    }
    return 0;
}
