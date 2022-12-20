/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

void fill_buffer(char **buffer, const int fd)
{
    int i;

    if ((*buffer = malloc(sizeof(char) * (READ_SIZE + 1))) == NULL)
        return;
    if ((i = read(fd, *buffer, READ_SIZE)) == -1)
        return;
    (*buffer)[i] = 0;
}

int fill_result(char **result, char **buffer)
{
    int i = 0;

    if ((*result = malloc(sizeof(char) * (READ_SIZE + 1))) == NULL)
        return (-1);
    while (**buffer != 0 && (i == 0 || *(*buffer - 1) != '\n')) {
        (*result)[i] = **buffer;
        (*buffer) += 1;
        i += 1;
    }
    return (i);
}
