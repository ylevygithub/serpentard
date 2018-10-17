
#include <string.h>
#include <stdlib.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

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

int my_strlen(char *str)
{
    int i = 0;

    while (str[i]) {
        i++;
    }
    return (i);
}

int my_malloc(int argc, char **argv)
{
    int a = 0;
    int b = 0;

    while (argv[a]) {
        b = b + my_strlen(argv[a]);
	a = a + 1;
    }
    b = b + argc;
    return (b);
}

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int x = 0;
    char *str;

    str = malloc(sizeof(char) * my_malloc(argc ,argv) + 1);
    while (argv[j])
    {
     	i = 0;
	while (argv[j][i])
	{
            str[x] = argv[j][i];
            i++;
            x++;
	}
        str[x] = '\n';
	j++;
        x++;
    }
    str[x] = '\0';
    return (str);
}

int main(int argc, char **argv)
{
    my_putstr(concat_params(argc, argv));
    return (EXIT_SUCCESS);
}


