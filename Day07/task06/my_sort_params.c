/*
** EPITECH PROJECT, 2018
** my_sort_params
** File description:
** my_sort_params
*/

void my_putchar(char c);

int my_strcmp(char *s1, char *s2)
{
    int i = 0;
    
    while (s1[i] || s2[i])
    {
        if (s1[i] == '\0' && s1[i] != s2[i + 1])
            return (s1[i] - s2[i + 1]);
        else if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        else if (s1[i] == s2[i])
            i++;
    }
    return (0);
}

void my_sort_string(char **tab, int size)
{
    int i = 0;
    char *temp;
    
    while (i + 1 < size)
    {
        if (my_strcmp(tab[i], tab[i + 1]) > 0)
        {
            temp = tab[i + 1];
            tab[i + 1] = tab[i];
            tab[i] = temp;
            i = 1;
        }
        else
            i++;
    }
}

int main(int argc, char **argv)
{
    int i;
    int j;
    
    my_sort_string(argv, argc);
    j = 0;
    while (j < argc)
    {
        i = 0;
        while (argv[j][i] != '\0')
        {
            my_putchar(argv[j][i]);
            i++;
        }
        j++;
        my_putchar('\n');
    }
    return (0);
}
