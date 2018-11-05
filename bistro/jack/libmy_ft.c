/*
** EPITECH PROJECT, 2018
** functions of libmy
** File description:
** there are the functions I need for the eval_expr.c 
*/

#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int nb;

    nb = 0;
    while (str[nb] != '\0') {
        my_putchar(str[nb]);
        nb = nb + 1;
    }
    return (0);
}

int my_strlen(char const *str)
{
    int nb;

    nb = 0;
    while (str[nb] != '\0')
        nb++;
    return (nb);
}

int my_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;
    while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
           || str[i] == '\f' || str[i] == '\r' || str[i] == ' ') {
        i++;
    }
    if (str[i] == '-') {
        sign = -1;
        i++;
    }
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] >= '0' && str[i] <= '9') {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

void my_sort_int_array(int *tab, int size)
{
    int i;
    int tmp;

    while (tab[i] < size) {
        if (tab[i] > tab[i + 1]) {
            tmp = tab[i + 1];
            tab[i + 1] = tab[i];
            tab[i] = tmp;
            i = 0;
        }
        else
            i++;
    }
}

char *my_strrev(char *str)
{
    char tmp;
    int i,j;

    i = 0;
    j = 0;
    while (str[i] != '\0')
        i++;
    while (j < i) {
        i--;
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        j++;
    }
    return (str);
}

int intlen(int a)
{
    int index = 0;

    while (a != 0) {
        a = a / 10;
        index++;
    }
    return (index);
}
/*
char *my_sort_int_string(int a)
{
    char *str;
    int i = 0;
    int sign = -1;

    str = malloc(sizeof(char) * intlen(a) + 1);
    while (a > 9) {
        str[i] = a % 10 + '0';
        a = a / 10;
        i++;
    }
    while (a < 0) {
        i = 0;
        str[i] = ((a % 10) * sign) + '0';
        a = a / 10;
        i++;
        if (a < 0 && a > -10)
            my_putchar('-');
        if (a <= -10) {
            i = 0;
            my_putchar('-');
            str[i] = a % 10 + '0';
            a = a / 10;
            i++;
        }
    }
    str[i] = a + '0';
    str[i + 1] = '\0';
    my_strrev(str);
    return (str);
}
*/
/*void main(void)
{
    printf("%s\n", my_sort_int_string(123456));
}
*/
char *my_sort_int_string(int a)
{
    char *str;
    int i = 0;
    int len = intlen(a);

    str = malloc(sizeof(char) * intlen(a) + 2);
    while (a > 9 || a < -9) {
        if (a < 0)
            str[i] = (a % 10 * -1) + '0';
        else
            str[i] = a % 10 + '0';
        a = a / 10;
        i++;
    }
    if (a < 0) {
        a = a * -1;
        str[i] = a + '0';
        str[i + 1] = '-';
        str[i + 2] = '\0';
        my_strrev(str);
        return (str);
    }
    str[i] = a + '0';
    str[i + 1] = '\0';
    my_strrev(str);
    return (str);
}

