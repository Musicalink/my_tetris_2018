/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include "my.h"

int my_putstr(char *str)
{
    while (*str != 0) {
        my_putchar(*str);
        str += 1;
    }
    return (0);
}
