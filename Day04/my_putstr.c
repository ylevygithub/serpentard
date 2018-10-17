/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** put string
*/

void    my_putchar(char c);

int    my_putstr(char const *str)
{
    int nb;
    
    nb = 0;
    while (str[nb] != '\0') {
        my_putchar(str[nb]);
        nb++;
    }
}
