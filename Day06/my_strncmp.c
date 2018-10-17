/*
** EPITECH PROJECT, 2018
** my_strncmp
** File description:
** compare the string at the dif.
*/

int    my_strncmp(char const *s1, char const *s2, int n)
{
	int i = 0;
        while ((s1 || s2) && (i < n)) {
                if (s1[i] != s2[i])
                        return (s1[i] - s2[i]);
                else if (s1[i] == '\0' && s1[i] != s2[i + 1])
                        return (s1[i] - s2[i + 1]);
                else if (s1[i] == s2[i])
                        i++;
        }
        return (0);
}
