/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

int get_update(char **board, t_pos *pos, t_scores *score)
{
    if (score->score > score->next) {
        score->level += 1;
        score->speed -= 50;
    }
    if (ftime(score->tp) && score->tp.millitm == score->speed) {
        falling_shapes(board, pos);
        usleep(1000);
        return (1);
    }
    return (0);
}
