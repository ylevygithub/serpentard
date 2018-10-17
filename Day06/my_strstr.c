/*
** EPITECH PROJECT, 2018
** my_strstr
** File description:
** my_strstr
*/

char    *my_strstr(char *str, char const *to_find)
{
	int i = 0;
	int j = 0;
	char *tab;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0') {
		if (str[i] == to_find[0]) {
			tab = str + i;
			while (str[i + j] == to_find[j]) {
				if (to_find[j+1] == '\0')
					return (tab);
				j++;
			}
			tab = 0;
		}
		i++;
	}
	return (0);
}
