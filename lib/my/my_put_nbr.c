/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include "my.h"

int my_put_nbr(int nb)
{
    long lnb = nb;

    if (lnb < 0) {
        my_putchar('-');
        lnb = -lnb;
    }
    if (lnb < 10)
        my_putchar(lnb + 48);
    else {
        my_put_nbr(lnb / 10);
        my_putchar(lnb % 10 + 48);
    }
    return (0);
}
