/*
** EPITECH PROJECT, 2018
** my_rev_params.c
** File description:
** my_rev_params.c
*/

void my_putchar(char c);

int main(int argc, char **argv)
{
    int i;
    int j;
    
    j = argc - 1;
    while (j >= 0)
    {
        i = 0;
        while (argv[j][i] != '\0')
        {
            my_putchar(argv[j][i]);
            i++;
        }
        j--;
        my_putchar('\n');
    }
    return (0);
}
