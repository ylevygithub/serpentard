x/*
** EPITECH PROJECT, 2018
** match Nmatch
** File description:
** match
*/

#include <string.h>
    
int match(char const *s1, char const *s2)
{
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
