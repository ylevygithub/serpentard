/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** a fusion of two string in the first one
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0') {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return (dest);
}
