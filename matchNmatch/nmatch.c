/*
** EPITECH PROJECT, 2018
** match Nmatch
** File description:
** Nmatch
*/

#include <string.h>

int my_recursive_factorial(int nb)
{
    if (nb < 0 || nb > 12)
        return (0);
    else if (nb == 1 || nb == 0)
        return (1);
    if (nb > 0)
        nb = nb * my_recursive_factorial(nb - 1);
    return (nb);
}

void asterisk_multiple(char const *s1, char const *s2)
{
    while (*s1 && *s2) {
        if ((*s1 == !('*') && *s2) || (*s2 == !('*') && *s1))
            return (my_recursive_factorial(nb));
        else
            return (0);
    }
}
    
int nmatch(char const *s1, char const *s2)
{
    asterisk_multiple(*s1,*s2);
    while (*s1 && *s2) {
        if (*s1 == *s2)
            return (1);
        else if (*s1 && *s2 == '*' || *s1 == '*' && *s2)
            return (1);
        else
            return (0);
    }
    return (0);
}

