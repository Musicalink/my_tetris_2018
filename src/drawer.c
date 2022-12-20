/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <ncurses.h>

void create_box(int pos_x, int pos_y, int x, int y)
{
    int i = pos_x - 1;
    int j;

    while (++i < pos_x + x) {
        j = pos_y - 1;
        mvprintw(i, pos_y, "|");
        mvprintw(i, pos_y + y - 1, "|");
        while (++j < pos_y + y) {
            if (i == pos_x || i == pos_x + x - 1)
                mvprintw(i, j, "-");
        }
    }
    mvprintw(pos_x, pos_y, "+");
    mvprintw(pos_x + x - 1, pos_y, "+");
    mvprintw(pos_x, pos_y + y - 1, "+");
    mvprintw(pos_x + x - 1, pos_y + y - 1, "+");
}

void create_box_sl(int pos_x, int pos_y, int x, int y)
{
    int i = pos_x - 1;
    int j;

    while (++i < pos_x + x) {
        j = pos_y - 1;
        mvprintw(i, pos_y, "|");
        mvprintw(i, pos_y + y - 1, "|");
        while (++j < pos_y + y) {
            if (i == pos_x || i == pos_x + x - 1)
                mvprintw(i, j, "-");
        }
    }
    mvprintw(pos_x, pos_y, "/");
    mvprintw(pos_x + x - 1, pos_y, "\\");
    mvprintw(pos_x, pos_y + y - 1, "\\");
    mvprintw(pos_x + x - 1, pos_y + y - 1, "/");
}
