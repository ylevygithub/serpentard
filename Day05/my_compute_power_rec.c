/*
** EPITECH PROJECT, 2018
** my_compute_power_rec
** File description:
** recursive power function
*/

int    my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return (0);
    else if (p == 0)
        return (1);
    else if (p == 1)
        return (nb);
    else
        return (nb * my_compute_power_rec(nb, p - 1));
}
