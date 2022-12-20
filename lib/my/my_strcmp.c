/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <unistd.h>

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] != 0 || s2[i] != 0) {
        if (s1[i] != s2[i])
            return ((s1[i] - s2[i] < 0) ? -1 : 1);
        i += 1;
    }
    return (0);
}
