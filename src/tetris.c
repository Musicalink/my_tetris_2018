/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <ncurses.h>
#include <sys/ioctl.h>
#include <time.h>
#include <termios.h>
#include <stdlib.h>
#include "tetris.h"

void non_block(int act, int vtime)
{
    struct termios t;
    static struct termios base;
    static int oui = 1;

    if (oui) {
        oui = 0;
        tcgetattr(0, &base);
    }
    tcgetattr(0, &t);
    t.c_lflag &= ~(ECHO | ICANON | ISIG);
    t.c_iflag = 0;
    t.c_cc[VMIN] = 0;
    t.c_cc[VTIME] = vtime;
    tcsetattr(0, TCSAFLUSH, &t);
    if (!act)
        tcsetattr(0, TCSAFLUSH, &base);
}

int main(int ac, char **av)
{
    t_pars p;
    t_shapes *s;
    t_game g;

    (void)ac;
    my_super_parser(&p, av);
    check_pars(&p);
    get_tetrimino(&s);
    non_block(1, -1);
    check_game(s, &p, 0);
    if (p.d)
        debug(&p, s);
    check_game(s, &p, 1);
    srand(time(NULL));
    init_game(&g, &p);
    non_block(1, 0);
    get_high_score(&g);
    game(s, &p, &g);
    set_high_score(&g);
    endwin();
    non_block(0, 0);
    return (0);
}
