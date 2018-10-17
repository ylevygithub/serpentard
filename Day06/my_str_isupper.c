/*
** EPITECH PROJECT, 2018
** my_str_isupper
** File description:
** my_str_isupper
*/

int    my_str_isupper(char const *str)
{
        int i = 0;
        if (str[i] == '\0') {
                i++;
                return (1);
        }
        while (str[i] != '\0')
        {
                if (str[i] >= 65 && str[i] <= 90)
                        i++;
                else if ((str[i] >= 0 && str[i] <= 64) ||
                         (str[i] >= 91 && str[i] <= 127))
                        return(0);
        }
        return (1);
}
