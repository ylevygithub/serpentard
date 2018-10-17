/*
** EPITECH PROJECT, 2018
** jbkbk*
** File description:
** jbnkjn
*/

int    my_getnbr(char *str)
{
    int nb;
    int i = 0;
    
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + str[i] - 48;
        }
        i++;
    }
    if (str[0] == '-'){
        nb = nb * -1;
    }
    return (nb);
}
