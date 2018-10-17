/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** string reverse
*/

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    char tmp;
    
    while (str[i] != '\0') {
        i++;
    }
    while (j < i) {
        i--;
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        j++;
    }
    return (str);
}
