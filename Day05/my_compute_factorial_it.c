/*
** EPITECH PROJECT, 2018
** my_compute_factorial_it
** File description:
** factorial function
*/

int    my_compute_factorial_it(int nb)
{
    int n = 1;
    int res = nb;
    
    if (nb < 0 || nb > 12)
        return (0);
    else if (nb == 0 || nb == 1)
        return (1);
    while (n < nb) {
        res = res * (nb - n);
        n++;
    }
    return (res);
}
