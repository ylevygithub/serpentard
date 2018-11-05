/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** count_nbr
*/

int my_strlen(char const *str)
{
    int count;

    while (str[count] != '\0') {
        count = count + 1;
    }
    return (count);
}
