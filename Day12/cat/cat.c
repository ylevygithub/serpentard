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
#include <stdio.h>

int mycatone(int fd)
{
    char b[30000];
    int fd1;

    if (fd == -1)
        return (84);
    fd1 = read(fd, b, 30000);
    if (fd1 == 0)
        return (5);
    b[fd1] = '\0';
    my_putstr(b);
    return (0);
}

int mycattwo(int ac, char **av)
{
    int i = 1;
    int fd = 0;

    while (i < ac) {
        fd = open(av[i], O_RDONLY);
        mycatone(fd);
        i++;
        close(fd);
    }
    return (0);
}
    
int main(int ac,char **av)
{
    int a = 0;

    if (ac == 1) {
        while (1) {
            if (mycatone(0) == 5)
                return (0);
        }
    }
    mycattwo(ac, av);
    return (0);
}
