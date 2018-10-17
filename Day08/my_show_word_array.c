/*
** EPITECH PROJECT, 2018
** my_show_word_array.c
** File description:
** displays the content of an array of words
*/

#include <string.h>
#include <stdlib.h>

int my_show_word_array(char * const *tab)
{
    int a = 0;
    int b = 0;
    
    while (tab[a]) {
        while (tab[a][b]) {
            my_putchar(tab[a][b]);
            b++;
        }
        my_putchar('\n');
        b = 0;
        a++;
    }
    return (0);
}
