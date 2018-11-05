void my_putchar(char c)
{
    write(1, &c, 1);
}

int number(char *str_donne)
{
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] > '0' && str[i] < '9') {
            
    
int main(int ac, char **av)
{
    if (ac == 2) {
        my_put_nbr(number(&av[1]));
        my_putchar('\n');
    }
    return 0;
}
