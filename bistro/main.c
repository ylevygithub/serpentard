#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "bistromatic.h"

/*
** Replace these lines with an include of a header file containing these prototypes
*/

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
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] >= '0' && str[i] <= '9') {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * sign);
}

/*static char  *get_expr(unsigned int size)
{
    char expr[100];

    if (size <= 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_SIZE_NEG);
    }
    if (expr == 0) {
        my_putstr(ERROR_MSG);
        exit(EXIT_MALLOC);
    }
    if (read(0, expr, size) != size) {
        my_putstr(ERROR_MSG);
        exit(EXIT_READ);
    }
    expr[size] = 0;
    return (expr);
}
*/
static void check_ops(char const *ops)
{
    if (my_strlen(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
}

static void check_base(char const *b)
{
    if (my_strlen(b) < 2) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
}

int main(int ac, char **av)
{
    unsigned int size;
    char *expr;
    char buff[16000 + 1];
    int offset = 0;
    int len;

    if (ac != 4) {
        my_putstr("Usage: ");
        my_putstr(av[0]);
        my_putstr(" base ops\"()+_*/%\" exp_len\n");
        return (EXIT_USAGE);
    }
    while ((len = read(0, buff + offset, 100 - offset)) > 0) {
        offset = offset + len;
    }
    buff[offset] = '\0';
    check_base(av[1]);
    check_ops(av[2]);
    size = my_atoi(av[3]);
//    expr = get_expr(size);
    my_putstr(eval_expr(buff));
    return (EXIT_SUCCESS);
}
