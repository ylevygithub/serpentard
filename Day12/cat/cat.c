/*
** EPITECH PROJECT, 2018
** cat.c
** File description:
** open and read the file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int mycat(int ac, char *av)
{
    int fd;
    char str[30000] = "";

    fd = open(av, O_RDONLY);
    if (fd == -1)
        return (84);
    read(fd, str, 30000);
    my_putstr(str);
    close(fd);
    return (0);
}

void mycatone(int ac, char **av)
{
    int i = 1;

    while (i != ac) {
        mycat(ac, av[i]);
        i++;
    }
}

int main(int ac,char **av)
{
   
    mycatone(ac, av);
    return (0);
}
