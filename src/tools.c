/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <stdlib.h>
#include <ncurses.h>
#include <time.h>
#include "tetris.h"

void replace_space(char **map)
{
    int i = -1;
    int j;

    while (map[++i]) {
        j = -1;
        while (map[i][++j])
            map[i][j] = (map[i][j] == ' ') ? -1 : map[i][j];
    }
}

int my_shapeslen(t_shapes *s)
{
    int count = -1;

    while (s[++count].name);
    return (count);
}

int my_intlen(int i)
{
    char *tmp = my_int_to_str(i, NULL);
    int len = my_strlen(tmp);

    free(tmp);
    return (len);
}

void init_game(t_game *g, t_pars *p)
{
    g->high_score = 0;
    g->score = 0;
    g->line = 0;
    g->level = p->l;
    g->level_time = 0;
    g->timer = 0;
    g->start_time = time(NULL);
    g->pause.paused = 0;
    g->pause.duration = 0;
    initscr();
    noecho();
    cbreak();
    curs_set(0);
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);
}
