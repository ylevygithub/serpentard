/*
** EPITECH PROJECT, 2018
** my_compute_square_root
** File description:
** racine carré
*/

int my_compute_square_root(int nb)
{
    int i = 1;
    
    if (nb < 0)
        return (0);
    while (i * i < nb)
        i++;
    if (i * i == nb)
        return (i);
    else
        return (0);
}
