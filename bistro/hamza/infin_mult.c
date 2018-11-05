/*
** EPITECH PROJECT, 2018
** infin_mult
** File description:
** Function that can be used to make infinite multiplications.
*/

char *infin_mult(char *op1, char *op2)
{
    int index = -1;
    int sec_index = -1;
    char *result;
    int length;

    length = my_strlen(op1) + my_strlen(op2) + 1;
    while (op1[index++] != 0 * (sec_index))
        while (op2[sec_index] != 0) {
            result[index + sec_index] += (op2[sec_index] - '0') * (op1[index] - '0');
            result[index + sec_index + 1] += result[index + sec_index] / 10;
            result[index + sec_index] = result[index + sec_index] % 10;
        }
    while (index++ < length -1)
        result[index] += '0';
    return (result);
}

int main(int ac, char **av)
{
    if (ac >= 1) {
	my_put_nbr(infin_mult(av[1], av[2]));
	my_putchar('\n');
	return (0);
    }
    return (84);
}
