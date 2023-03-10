/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <unistd.h>
#include "tetris.h"

int get_size(t_shapes *piece, char *first_line)
{
    char **tab;
    int i = -1;

    piece->width = 0;
    piece->height = 0;
    piece->color = 0;
    if (!first_line)
        return (1);
    while (first_line[++i])
        if ((first_line[i] < '0' || first_line[i] > '9') &&
            first_line[i] != ' ')
            return (1);
    tab = my_strsplit(first_line, ' ');
    if (my_tablen(tab) != 3)
        return (1);
    piece->width = my_getnbr(tab[0]);
    piece->height = my_getnbr(tab[1]);
    piece->color = my_getnbr(tab[2]);
    free_tab(&tab);
    return (0);
}

void check_map(t_shapes *piece, char *str)
{
    int i = -1;

    while (str[++i])
        if (str[i] != ' ' && str[i] != '*' && str[i] != '@')
            piece->map = NULL;
    if (my_tablen(piece->map) != piece->height)
        piece->map = NULL;
    i = -1;
    while (piece->map && piece->map[++i])
        if (my_strlen(piece->map[i]) > piece->width)
            piece->map = NULL;
    i = -1;
    while (piece->map && piece->map[++i] &&
        my_strlen(piece->map[i]) != piece->width);
    if (piece->map && piece->map[i] == NULL)
        piece->map = NULL;
}