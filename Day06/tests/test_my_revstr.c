#include <criterion/criterion.h>

Test(my_revstr, return_value_is_reversed)
{
        char str[6] = [0];

        strcpy(str, "Hello");
        cr_assert_str_eq(my_revstr(str), "olleH");
}
