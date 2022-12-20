/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include "my.h"

void del_final_space(char *s)
{
    int e = -1;
    int i = -1;

    while (s[++i])
        if (s[i] == '*')
            e = i;
    if (e != -1)
        s[e + 1] = 0;
}

int my_tablen(char **tab)
{
    int i = 0;

    while (tab && tab[++i]);
    return (i);
}

void print_debug(char *s)
{
    if (!my_strcmp(s, " "))
        my_putstr("(space)");
    else
        my_putstr(s);
}
