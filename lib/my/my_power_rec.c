/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

int my_power_rec(int nb, int p)
{
    if (p < 0)
        return (0);
    else if (p == 0)
        return (1);
    else
        return (nb * my_power_rec(nb, p - 1));
}
