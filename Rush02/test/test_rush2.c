/*
** EPITECH PROJECT, 2018
** rush2
** File description:
** unit_test of rush2
*/

#include <criterion/criterion.h>

Test(char_is_ltr, test_c_is_ltr)
{
    cr_assert_eq(char_is_ltr('c'), 1);
}

Test(char_is_ltr, test_1_is_ltr)
{
    cr_assert_eq(char_is_ltr('1'), 0);
}
