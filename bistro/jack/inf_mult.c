/*
** EPITECH PROJECT, 2018
** inf_mult
** File description:
** this file calculate strings with the multiplication operator 
*/

#include <stdlib.h>
#include <unistd.h>

long long my_put_nbr(long long nb)
{
    if (nb > 9) {
        my_put_nbr(nb / 10);
    }
    else if (nb < 0) {
        nb = nb * -1;
        my_putchar('-');
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + 48);
    return (0);
}

int inf_mult(char **str)
{
    char *tmp;
    int i = 0;
    int j = 0;
    int result = 0;
    int result2 = 0;
    char si;
    int calcul = 0;

    tmp = *str;
    while (tmp[i] != '\0') {
        while (tmp[j] >= '0' && tmp[j] <= '9') {
            result = (result * 10) + (tmp[j] - '0');
            j++;
        }
        si = tmp[j];
        j++;
        while (tmp[j] >= '0' && tmp[j] <= '9') {
            result2 = (result2 * 10) + (tmp[j] - '0');
            j++;
        }
        if (si == '*')
             calcul = result * result2;
    }
    return (calcul);
}

int main(int ac, char **av)
{
    if (ac == 2) {
        my_putstr(my_sort_int_string(inf_mult(&av[1])));
        my_putchar('\n');
    }
    return (84);
}

/*int inf_mult(char **str)
{
    int i = 0;
    int j = 0;
    int res = 0;
    //int res1 = 1;
    int res2 = 0;
    int sign = 1;
    int calcul = 1;

    while (str[j][i] != '\0') {
        while (str[j][i] == '-' || str[j][i] == '+') {
            if ((str[j][i] == '-' && str[j][i + 1] == '+') || (str[j][i] == '+' && str[j][i + 1] == '-')) {
                sign = -1;
                my_putchar('a');
                i++;
            }
            else
                i++;   
        }
        while (str[j][i] >= '0' && str[j][i] <= '9') {
            res = res * 10 + (str[j][i] - '0');
            my_putchar('b');
            i++;
        
        //if (str[j][i] == '*') {
        //  my_putchar('e');
        //}
            while (str[j][i] >= '0' && str[j][i] <= '9') {
                res2 = res2 * 10 + (str[j][i] - '0');
                my_putchar('c');
                i++;
            }
        }
        calcul = res * res2 * sign;
    }
    my_putchar('d');
    return (calcul);
    }

char *inf_mult(char *a, char *b)
{
    int c;

    c = my_atoi(a) * my_atoi(b);
    return(my_sort_int_string(c));
}

int main(int ac, char **av)
{
    my_putstr(inf_mult(av[1], av[2]));
    my_putchar('\n');
    return (0);
}
*/
