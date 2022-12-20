/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <stdlib.h>

char *my_strstr(char *str, char *to_find)
{
    int pos;
    int l = 0;
    int i;

    if (to_find[0] == 0)
        return (str);
    while (str[l] != 0) {
        if (str[l] == to_find[0]) {
            pos = l;
            i = 0;
            while (str[l] == to_find[i] && str[l] != 0) {
                i += 1;
                if (to_find[i] == 0)
                    return (str + pos);
                l += 1;
            }
            l = pos;
        }
        l += 1;
    }
    return (NULL);
}
