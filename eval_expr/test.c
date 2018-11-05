
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "string.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}


int number(char **str_donne)
{
    char *str;
    int res = 0;
    int n = 0;
    int a = 1;

    str = *str_donne;
    while (str[n] <= '9' && str[n] >= '0' || str[n] == '+' || str[n] == '-') {
        if (str[n] == '-') {
            a = a * -1;
        }
        if (str[n] == '+')
            a = a;
        else {
            res = (10 * res) + str[n] - '0';
            n++;
        }
    }
    //*str_donne = &(str[n]);
    res = res * a;
    return (res);
}

int summands(char **str, char **str2)
{
    char *result;
    int calcul;
    //int calcul1 = 0;
    int rest = 0;
    
    //int calcul2 = 0;
    calcul = (*str[0] - 48) + (*str2[0] - 48) + rest;
    //calcul = (*str[0] - 48) + rest;
    //calcul1 = (*str2[0] - 48) + rest;
    //calcul2 = calcul + calcul1;
    while (str && str2) {
        if (calcul > 9) {
            rest = 1;
            calcul = calcul % 10;
            //calcul1 = calcul1 % 10;
            //calcul2 = calcul + calcul1;
            //result[0] = (calcul + 48) + (calcul1 + 48);
            //result[0] = calcul2 + 48;
            result[0] = calcul + 48;
        }
        else {
            rest = 0;
            result[0] = calcul + 48;
            //result[0] = calcul2 + 48;
            //result[0] = (calcul + 48) + (calcul1 + 48);
        }
    }
    return (result);
}

int main(int ac, char **av)
{
    if (ac == 2) {
        my_atoi(summands(&av[1], &av[2]));
        my_putchar('\n');
    }
    return 0;
}
