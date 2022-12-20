/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <stdlib.h>
#include "my.h"

char *my_int_to_str(int nbr, char *result)
{
    int i;
    int nbrr;

    if (result == NULL)
        if ((result = malloc(sizeof(char) * 15)) == NULL)
            return (NULL);
    nbrr = nbr;
    i = 0;
    if (nbr < 0)
        nbr *= -1;
    while (nbr != 0) {
        result[i++] = nbr % 10 + '0';
        nbr /= 10;
    }
    if (nbrr < 0)
        result[i++] = '-';
    result[i] = 0;
    if (nbrr == 0) {
        result[0] = '0';
        result[1] = 0;
    }
    return (my_revstr(result));
}
