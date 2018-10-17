/*
** EPITECH PROJECT, 2018
** my_str_isnum
** File description:
** my_str_isnum
*/

int    my_str_isnum(char const *str)
{
        int i = 0;
        if (str[i] == '\0') {
                i++;
                return (1);
        }
        while (str[i] != '\0') {
                if (str[i] >= 48 && str[i] <= 57)
                        i++;
                else if ((str[i] >= 0 && str[i] <= 47) ||
                         (str[i] >= 58 && str[i] <= 127))
                        return (0);
        }
        return (1);
}
