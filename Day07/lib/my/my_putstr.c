void my_putchar(char c);

int my_putstr(char const *str)
{
    int nb;
    
    nb = 0;
    while (str[nb] != '\0')
    {
        my_putchar(str[nb]);
        nb = nb + 1;
    }
    return (0);
}
