/*
** EPITECH PROJECT, 2018
** my_swap
** File description:
** swaping function
*/

void    my_swap(int *a, int *b)
{
    int swap;
    
    swap = *a;
    *a = *b;
    *b = swap;
}
