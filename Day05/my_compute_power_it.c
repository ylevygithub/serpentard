/*
** EPITECH PROJECT, 2018
** my_compute_power_it
** File description:
** iterative power function
*/

int    my_compute_power_it(int nb, int p)
{
    int i = nb;
    
    if (p < 0)
        return (0);
    else if (p == 0)
        return (1);
    else if (p == 1)
        return (nb);
    while (p > 1) {
        nb *= i;
        p--;
    }
    return (nb);
}
