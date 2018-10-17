/*
** EPITECH PROJECT, 2018
** my_sort_int_array
** File description:
** my_sort_int_array
*/

void    my_sort_int_array(int *array, int size)
{
    int i;
    int tmp;
    
    while (i < size) {
        if (array[i] > array[i + 1]) {
            tmp = array[i + 1];
            array[i + 1] = array[i];
            array[i] = tmp;
            i = 0;
        }
        else
            i++;
    }
}
