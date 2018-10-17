/*
** EPITECH PROJECT, 2018
** my_isneg
** File description:
** my_isneg
*/

void    my_putchar(char c);

int    my_isneg(int n)
{
    char N;
    char P;

    N = 'N';
    P = 'P';
    if (n >= 0)
        my_putchar(P);
    else if (n < 0)
        my_putchar(N);
    return 0;
}
