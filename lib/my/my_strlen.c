/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <stdlib.h>

int my_strlen(char *str)
{
    int lenght;

    if (str == NULL)
        return (0);
    lenght = 0;
    while (*str != 0) {
        str += 1;
        lenght += 1;
    }
    return (lenght);
}
