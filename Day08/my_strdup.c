/*
** EPITECH PROJECT, 2018
** my_strdup.c
** File description:
** my_string duplicate
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *str;
    int i = 0;

    str = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[i] != '\0') {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
