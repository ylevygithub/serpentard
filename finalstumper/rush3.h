/*
** EPITECH PROJECT, 2018
** rush3h
** File description:
** rush3h
*/

#ifndef RUSH3_H_
#define RUSH3_H_

void my_putchar(char c);
void my_putstr(char *str);
void my_put_nbr(int nb);
int my_strlen(char *str);
int my_line_size(char *str);
int my_up_size(char *str);
void display_same_up_lane(int line_size, int up_size);
int display_size_for_up_lane(char *str, int line_size, int up_size);
int my_display_size_for_one(char *str, int line_size, int up_size);
int display_alpha_square(char *str, int line_size, int up_size);
int display_total_size(char *str, int line_size, int up_size);
void rush3(char *str);

#endif
