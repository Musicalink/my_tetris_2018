/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    if (my_is_prime(nb) == 1)
        return (nb);
    else {
        nb += 1;
        return (my_find_prime_sup(nb));
    }
}
