/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

int my_fact_rec(int nb)
{
    if (nb < 0 || nb > 12)
        return (0);
    else if (nb == 0)
        return (1);
    else
        return (my_fact_rec(nb - 1) * nb);
}
