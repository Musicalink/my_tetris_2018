/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char *src)
{
    char *dup;
    int i;

    if ((dup = malloc(sizeof(char) * my_strlen(src) + 1)) == NULL)
        return ((char *)(long)my_puterror("error"));
    i = 0;
    while (src[i] != 0) {
        dup[i] = src[i];
        i += 1;
    }
    dup[i] = 0;
    return (dup);
}
