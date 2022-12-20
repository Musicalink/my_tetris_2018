/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <stdlib.h>
#include "tetris.h"

char *fill_str(char *str, int i)
{
    char *dest;
    int j = -1;

    j = -1;
    if (my_strlen(str) > i)
        return (NULL);
    if ((dest = malloc(sizeof(char) * (i + 1))) == NULL)
        return (NULL);
    while (str && str[++j])
        dest[j] = str[j];
    j--;
    while (++j < i)
        dest[j] = ' ';
    dest[j] = '\0';
    free(str);
    return (dest);
}

void free_tab(char ***tab)
{
    int i = -1;

    while (*tab && (*tab)[++i])
        free((*tab)[i]);
    free((*tab)[i]);
    if (*tab)
        free((*tab));
}

char *spe_pure(char *str)
{
    if (str[0] == '"' || str[0] == '\'' || str[0] == '{') {
        str[my_strlen(str) - 1] = 0;
        str += 1;
    }
    return (str);
}

void sort_tetri(t_shapes *shapes)
{
    int i = -1;
    int j;
    t_shapes tmp;

    if (!shapes)
        return;
    while (shapes[++i].name)
        shapes[i].name[my_strlen(shapes[i].name) - 10] = 0;
    i = -1;
    while (shapes[++i].name) {
        j = -1;
        while (shapes[++j].name)
            if (my_strcmp(shapes[i].name, shapes[j].name) < 0) {
                tmp = shapes[i];
                shapes[i] = shapes[j];
                shapes[j] = tmp;
            }
    }
}

int my_help(char *name)
{
    my_putstr("Usage: ");
    my_putstr(name);
    my_putstr(" [options]\nOptions:\n");
    my_putstr("  --help\t\tDisplay this help\n  -l --level");
    my_putstr("={num}\tStart Tetris at level num (def: 1)\n");
    my_putstr("  -kl --key-left={K}\tMove the tetrimino ");
    my_putstr("LEFT using the K key (def: left arrow)\n");
    my_putstr("  -kr --key-right={K}\tMove the tetrimino ");
    my_putstr("RIGHT using the K key (def: right arrow)\n");
    my_putstr("  -kt --key-turn={K}\tTURN the tetrimino ");
    my_putstr("clockwise 90d using the K key (def: top arrow)\n");
    my_putstr("  -kd --key-drop={K}\tDROP the tetrimino ");
    my_putstr("using the K key (def: down arrow)\n");
    my_putstr("  -kq --key-quit={K}\tQUIT the game ");
    my_putstr("using the K key (def: 'Q' key)\n");
    my_putstr("  -kp --key-pause={K}\tPAUSE/RESTART the game ");
    my_putstr("using the K key (def: space bar)\n");
    my_putstr("  --map-size={row,col}\tSet the numbers of ");
    my_putstr("rows and columns of the map (def: 20,10)\n");
    my_putstr("  -w --without-next\tHide next tetrimino (def: ");
    my_putstr("false)\n  -d --debug\t\tDebug mode (def: false)\n");
    exit(0);
}