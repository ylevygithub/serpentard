/*
** EPITECH PROJECT, 2018
** my_params_to_list
** File description:
** liste chainée
*/

linked_list_t(struct s_list **list, char **av, int ac)
{
    struct s_list *elem;
    struct s_list *tmp;

    elem = malloc(sizeof(*elem));
    elem -> *av = *av;
    elem -> ac = ac;
    elem -> next = *list;
    *list = elem;
    tmp = list;
    while (tmp -> next != NULL && tmp)
        tmp = tmp -> next;
    return (0);
}
