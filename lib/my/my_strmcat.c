/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <stdlib.h>
#include "my.h"

char *my_strmcat(char *str1, char *str2)
{
    char *result;
    int len1;
    int len2;
    int i;
    int j;

    if (str2 == NULL)
        return (my_strdup(str1));
    if (str1 == NULL)
        return (my_strdup(str2));
    len1 = -1;
    while (str1[++len1]);
    len2 = -1;
    while (str2[++len2]);
    if ((result = malloc(sizeof(char) * (len1 + len2 + 1))) == NULL)
        return (NULL);
    i = -1;
    j = -1;
    while (str1[++i])
        result[++j] = str1[i];
    i = -1;
    while (str2[++i])
        result[++j] = str2[i];
    result[++j] = 0;
    return (result);
}
