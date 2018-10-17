/*
** EPITECH PROJECT, 2018
** my_print_params
** File description:
** print the params
*/

void my_putchar(char c);

int main(int argc, char **argv)
{
    int i;
    int j;
    
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
