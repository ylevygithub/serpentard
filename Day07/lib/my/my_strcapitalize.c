/*
** EPITECH PROJECT, 2018
** my_strcapitalize
** File description:
** my_strcapitalize
*/

char *my_strlowcase(char *str)
{
    int i = 0;
    
    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    my_strlowcase(str);
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
        while (str[i] != '\0')
        {
            if ((str[i] >= 0 && str[i] <= 47) ||
                (str[i] >= 58 && str[i] <= 64) ||
                (str[i] >= 91 && str[i] <= 96) ||
                (str[i] >= 123 && str[i] <= 127)) {
                if (str[i + 1] >= 97 && str[i +1] <= 122)
                    str[i+1] = str[i+1] - 32;
            }
            i++;
        }
        return (str);
}
