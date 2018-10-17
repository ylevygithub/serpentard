/*
** EPITECH PROJECT, 2018
** my_sort_int_array
** File description:
** my_sort_int_array
*/

void my_sort_int_array(int *tab, int size)
{
    int i;
    int tmp;
    
    while (i < size) {
        if (tab[i] > tab[i + 1]) {
            tmp = tab[i + 1];
            tab[i + 1] = tab[i];
            tab[i] = tmp;
            i = 0;
        }
        else
            i++;
    }
}
