/*
** EPITECH PROJECT, 2018
** aller
** File description:
** aller
*/


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
    else
    return (index);
}

char *number(char *str)
{
    int i = 0;
    int j = 0;
    int result = 0;
    char *stock;
    int len = my_strlen(str);
    stock = malloc(sizeof(char) * len);

    while (str[i] != '\0') {
        if (str[i] == '+' || str[i] == '-' || str[i]  == '*' || str[i] == '%' || str[i] == '/' || str[i] == '(' || str[i] == ')') {
            stock[j] = str[i];
            j++;
        }
        if (str[i] >= '0' && str[i] <= '9') {
            stock[j] = str[i];
            j++;
        }
        i++;
    }
    stock[i] = '\0';
    return (stock);
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

char *my_sort_int_string(int a)
{
    char *str;
    int i = 0;

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

int infin_add(char *str)
{
    char *endptr;
    int i = 0;
    int j = 0;
    int result = 0;
    int result2 = 0;
    char si;
    int somme = 0;

    while(str[i] != '\0') {
        if (str[i] == '(')
            return (0);
        else {
        while (str[j] >= '0' && str[j] <= '9') {
        result = (result * 10) + (str[j] - '0');
        j++;
        }
        si = str[j];
        j++;
        while (str[j] >= '0' && str[j] <= '9') {
        result2 = (result2 * 10) + (str[j] - '0');
        j++;
        }
        if (si == '+')
            somme = somme + result + result2;
        else
            somme = somme + result - result2;
        result = 0;
        result2 = 0;
        }
        i++;
    }
    return (somme);
}

int infin_add2(char *str)
{
    char *endptr;
    int i = 0;
    int j = 0;
    int result = 0;
    int result2 = 0;
    char si;
    int somme = 0;

    while(str[i] != '\0') {
        if (str[i] == '(') {
            while (str[j] >= '0' && str[j] <= '9') {
                result = (result * 10) + (str[j] - '0');
                j++;
            }
            si = str[j];
            j++;
            while (str[j] >= '0' && str[j] <= '9') {
                result2 = (result2 * 10) + (str[j] - '0');
                j++;
            }
            if (si == '+')
                somme = somme + result + result2;
            else
                somme = somme + result - result2;
            result = 0;
            result2 = 0;
        }
        i++;
    }
    return (somme);
}

int factors(char *str)
{
    return (0);
}

char *eval_expr(char *str)
{
    int i = 0;
    int nbr = 0;
    int indicator = 0;
    char *dest;
    int nbr2 = 0;

    dest = malloc(sizeof(char) * (my_strlen(str) + 1));
    str = number(str);
    while (str) {
        if (str[i] != '(') {
            nbr2 = infin_add2(str);
            i++;
        }
        if (str[i] >= '0' && str[i] <= '9') {
            indicator = 1;
            i++;
        }
        if (str[i] == '*' || str[i] == '/' || str[i] == '%') {
            factors(str);
            indicator = 1;
            i++;
        }
        if (str[i] == '+' || str[i] == '-') {
            str = my_sort_int_string(infin_add(str));
            indicator = 1;
            i++;
        }
        if (str[i] == '\0')
            return (str);
        if (indicator == 0) {
            return (str);
            eval_expr(str);
        }
    }
}

char *int_to_string(int a)
{
    int i = 0;
    char *str;
    str = malloc(sizeof(char) * 12);

    while(str[i] != '\0') {
        str[12 - i] = a%10 - '0';
        a = a/10;
        i++;
    }
    return (str);


}
