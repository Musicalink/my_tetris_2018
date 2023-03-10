/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <stdlib.h>
#include <ncurses.h>
#include "tetris.h"

static char *replace_esc(char *s)
{
    int i = -1;
    int j = -1;
    char *res = malloc(sizeof(char) * my_strlen(s) * 2);

    while (s[++i]) {
        res[++j] = s[i];
        if (s[i] == 27) {
            res[j] = '^';
            res[++j] = 'E';
        }
    }
    res[++j] = 0;
    return (res);
}

static void key_debug(t_pars *p)
{
    my_putstr("*** DEBUG MODE ***\nKey Left :  ");
    print_debug(replace_esc(p->kl));
    my_putstr("\nKey Right :  ");
    print_debug(replace_esc(p->kr));
    my_putstr("\nKey Turn :  ");
    print_debug(replace_esc(p->kt));
    my_putstr("\nKey Drop :  ");
    print_debug(replace_esc(p->kd));
    my_putstr("\nKey Quit :  ");
    print_debug(replace_esc(p->kq));
    my_putstr("\nKey Pause :  ");
    print_debug(replace_esc(p->kp));
    my_putstr("\nNext :  ");
    my_putstr((p->w) ? "Yes" : "No");
    my_putstr("\nLevel :  ");
    my_put_nbr(p->l);
    my_putstr("\nSize :  ");
    my_put_nbr(p->row);
    my_putstr("*");
    my_put_nbr(p->col);
    my_putstr("\n");
}

static void tetri_debug_put(t_shapes *s, int i)
{
    int k;
    int j = -1;

    my_putstr(" :  Size ");
    my_put_nbr(s[i].width);
    my_putstr("*");
    my_put_nbr(s[i].height);
    my_putstr(" :  Color ");
    my_put_nbr(s[i].color);
    my_putstr(" :\n");
    while (s[i].map[++j]) {
        k = -1;
        while (s[i].map[j][++k])
            my_putchar((s[i].map[j][k] == -1) ? ' ' : s[i].map[j][k]);
        my_putchar('\n');
    }
}

static void tetri_debug(t_shapes *s)
{
    int i = -1;

    my_putstr("Tetriminos :  ");
    my_put_nbr(my_shapeslen(s));
    my_putstr("\n");
    while (s[++i].name) {
        my_putstr("Tetriminos :  Name ");
        my_putstr(s[i].name);
        if (!s[i].valide) {
            my_putstr(" :  Error\n");
            continue;
        }
        tetri_debug_put(s, i);
    }
}

void debug(t_pars *p, t_shapes *s)
{
    key_debug(p);
    tetri_debug(s);
    my_putstr("Press any key to start Tetris\n");
    get_action(p);
}