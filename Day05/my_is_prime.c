/*
** EPITECH PROJECT, 2018
** my_is_prime
** File description:
** prime number
*/

int    my_is_prime(int nb)
{
    int i = 2;
    
    if (nb <= 1)
        return (0);
    while(nb % i != 0)
        i++;
    if(nb == i)
        return(1);
    else
        return(0);
}
