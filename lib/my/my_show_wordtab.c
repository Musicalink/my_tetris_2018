/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include "my.h"

int my_show_wordtab(char **tab)
{
    if (*tab == 0)
        return (0);
    if (**tab != 0)
        my_putstr(*tab);
    my_putchar('\n');
    return (my_show_wordtab(tab + 1));
}
