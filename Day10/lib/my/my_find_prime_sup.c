/*
** EPITECH PROJECT, 2018
** my_find_prime_sup
** File description:
** find the next prime
*/

int my_is_prime(int);

int my_find_prime_sup(int nb)
{
    while (my_is_prime(nb) != 1)
	nb++;
    return (nb);
}
