/*
** EPITECH PROJECT, 2018
** btree.h
** File description:
** btree.h struct
*/

typedef struct btree
{
    struct btree *left;
    struct btree *right;
    void *item;
} btree_t;
