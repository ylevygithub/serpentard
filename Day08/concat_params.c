/*
** EPITECH PROJECT, 2018
** concat_params.c
** File description:
** concat_params
*/

#include <stdlib.h>

int my_malloc(int argc, char **argv)
{
    int a = 0;
    int b = 0;
    
    while (argv[a]) {
        b = b + my_strlen(argv[a]);
        a = a + 1;
    }
    b = b + argc;
    return (b);
}

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int x = 0;
    char *str;
    
    str = malloc(sizeof(char) * my_malloc(argc ,argv) + 1);
    while (argv[j]) {
        i = 0;
        while (argv[j][i]) {
            str[x] = argv[j][i];
            i++;
            x++;
        }
        str[x] = '\n';
        j++;
        x++;
    }
    str[x] = '\0';
    return (str);
}
