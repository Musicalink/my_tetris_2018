/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <fcntl.h>
#include <unistd.h>
#include "tetris.h"

void get_high_score(t_game *game)
{
    int fd;

    if ((fd = open(HIGH_SCORE_F, O_RDONLY)) <= 0)
        return;
    read(fd, &(game->high_score), sizeof(int));
    close(fd);
}

void set_high_score(t_game *game)
{
    int fd;

    if (game->high_score >= game->score)
        return;
    if ((fd = open(HIGH_SCORE_F, O_RDWR | O_CREAT | O_TRUNC, 0644)) <= 0)
        return;
    write(fd, &(game->score), sizeof(int));
    close(fd);
}
