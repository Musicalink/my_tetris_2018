/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <unistd.h>
#include "my.h"

int my_getnbr(char *str)
{
    int nbr;

    if (str == NULL)
        return (0);
    nbr = my_getnbr_base(str, "0123456789");
    return (nbr);
}
