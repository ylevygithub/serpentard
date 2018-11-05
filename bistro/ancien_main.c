/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c)
{
    write(1,&c,1);
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

int my_put_nbr(int nb)
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
}

/*int my_strlen(char const *str)
{
        int len;

        len = 0;
        while(str[len] != '\0')
        {
                len = len + 1;
        }
        return (len);
}

void infin_add(char const *s1)
{
    int len1 = my_strlen(s1) - 1;
    int index = 0;
    int alpha = 0;
    int beta = 0;
    char *result;
    int ret = 0;
    int ntout = 0;
    int calc = alpha + beta;

    result = malloc(ret + 1);
    while (s1[index] != '\0') {
        alpha = tozz(s1[len1]);
        calc = (calc * 10) + alpha;
        (alpha + beta > 9) ? calc = calc % 10 : 1;
        (alpha + beta > 9) ? ntout = 1 : 1;
        (alpha + beta < 9) ? ntout = 0 : 1;
	my_putnbr(
	index++;
        len1--;
    }
    }*/
/*int priorities(char *
if (**expr == '(') {
        (*expr)++;
        nbr = parse_sum(expr);
        if (**expr == ')')
            (*expr)++;
        return (nbr);
*/
int infin_add(char **str)
{
    char *endptr;
    int i = 0;
    int j = 0;
    int result = 0;
    int result2 = 0;
    char si;
    int somme = 0;

    endptr = *str;
    while(endptr[i] != '\0') {
	while (endptr[j] >= '0' && endptr[j] <= '9') {
        result = (result * 10) + (endptr[j] - '0');
	j++;
	}
	si = endptr[j];
	j++;
	while (endptr[j] >= '0' && endptr[j] <= '9') {
        result2 = (result2 * 10) + (endptr[j] - '0');
        j++;
	}
	if (si == '+')
	    somme = somme + result + result2;
	else
	    somme = somme + result - result2;
	result = 0;
	result2 = 0;
	i++;
    }
    return (somme);
}

char *my_strrev(char *str)
{
    char tmp;
    int i = 0;
    int j = 0;
    
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
    if (a < 0) {
	index++;
	return (index);
    }
    return (index);
}

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

int main(int ac, char **av)
{
    if (ac == 2) {
        my_putstr(my_sort_int_string(infin_add(&av[1])));
        my_putchar('\n');
        return (0);
    }
    return (84);
}
