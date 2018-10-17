/*
** EPITECH PROJECT, 2018
** my_evil_str
** File description:
** string in reverse
*/

char    *my_evil_str(char *str)
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
