#include <stdlib.h>

char    *my_strcat(char *dest, char const *src)
{
    my_putstr();
    return (0);
}

int    main()
{
    char *str1;
    char str2[] = "trucs";

    str1 = malloc((20 + 1) * sizeof(char));
    str1[0] = 'T';
    str1[1] = 'e';
    str1[2] = 's';
    str1[3] = 't';
    str1[4] = '\0';

    my_strcat(str1,str2);
    return (0);
}

