/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <unistd.h>

char *my_strcat(char *dest, char *src)
{
    int i;
    int j;

    if (dest == NULL)
        return (src);
    else if (src == NULL)
        return (dest);
    i = 0;
    j = 0;
    while (dest[i] != 0)
        i += 1;
    while (src[j] != 0) {
        dest[i + j] = src[j];
        j += 1;
    }
    dest[i + j] = 0;
    return (dest);
}
