/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <unistd.h>
#include "my.h"

int my_puterror(char *str)
{
    write(2, str, my_strlen(str));
    return (0);
}
