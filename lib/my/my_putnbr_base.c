/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include "my.h"

static int my_putnbr_base_rec(long nbr, char *base, int len)
{
    int i = nbr / len;

    if (i > len)
        my_putnbr_base_rec(i, base, len);
    else
        my_putchar(base[i]);
    my_putchar(base[nbr % len]);
    return (0);
}

int my_putnbr_base(int nbr, char *base)
{
    int i = 0;
    long lnbr = nbr;

    while (base[i])
        i += 1;
    if (nbr >= 0)
        my_putnbr_base_rec(lnbr, base, i);
    else {
        my_putchar('-');
        my_putnbr_base_rec(-lnbr, base, i);
    }
    return (0);
}
