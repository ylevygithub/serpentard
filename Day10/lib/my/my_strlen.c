int my_strlen(char const *str)
{
    int nb;
    
    nb = 0;
    while (str[nb] != '\0')
        nb++;
    return (nb);
}
