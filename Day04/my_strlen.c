/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** string length
*/

int    my_strlen(char const *str)
{
    int nb;
    
    while (str[nb] != '\0') {
        nb++;
    }
    return (nb);
}
