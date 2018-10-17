/*
** EPITECH PROJECT, 2018
** Rush2
** File description:
** main and putchar of the program
*/

#include <stdlib.h>

int char_is_ltr(char c) {
    if (c > '@' && c < '[')
	return (1);
    if (c > 96 && c < '{')
	return (1);
    return (0);
}

int count_ltr(int argc, char **argv, int letter_arg)
{
    int letter_counter = 0;
    int str_integer = 0;
    
    while (argv[1][str_integer]) {
	if (argv[1][str_integer] == argv[letter_arg][0])
	    letter_counter++;
	if (argv[1][str_integer] == argv[letter_arg][0] - 32)
	    letter_counter++;
	if (argv[1][str_integer] == argv[letter_arg][0] + 32)
            letter_counter++;
	str_integer++;
	}
    return (letter_counter);
}

int display_freq(int argc, char **argv, int letter_counter, int nbr_ltr)
{
    int unit = 0;
    int hundredth = 0;
    int tenth = 0;
    
    my_putchar(' ');
    my_putchar('(');
    unit = letter_counter * 100 / nbr_ltr;
    my_put_nbr(unit);
    my_putchar('.');
    tenth = letter_counter * 1000 / nbr_ltr - (unit * 10);
    my_put_nbr(tenth);
    hundredth = letter_counter * 10000 / nbr_ltr - (unit * 100 + tenth * 10);
    my_put_nbr(hundredth);
    my_putchar('%');
    my_putchar(')');
    my_putchar('\n');
}

int error_input(int argc,char **argv)
{
    if (argc < 3) {
	my_putstr("not enough arguments");
	return (84);
    }
    if ((argv[2][0] < 'A' || argv[2][0] > 'Z') && (argv[2][0] < 'a' || argv[2][0] > 'z')) {
	my_putstr("wrong argument");
	return (84);
    }
    return (0);
}

int main(int argc, char **argv)
{
    int letter_arg = 2;
    int str_integer = 0;
    int nbr_ltr = 0;

    if (error_input(argc, argv) == 84)
	return (84); 
    while (argv[1][str_integer]) {
	if (char_is_ltr(argv[1][str_integer]) == 1) {
	    nbr_ltr++;
	}
	str_integer++;
    }
    while (argc != letter_arg) {
	display_result(argc, argv, count_ltr(argc, argv, letter_arg), letter_arg);
	display_freq(argc, argv, count_ltr(argc, argv, letter_arg), nbr_ltr);
	letter_arg++;
    }
    return (0);
}
