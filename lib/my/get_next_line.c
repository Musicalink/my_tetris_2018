/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"
#include "get_next_line.h"

static int search_struct(t_buffer *buffer, const int fd)
{
    int i = -1;

    if (buffer == NULL)
        return (0);
    while (buffer[++i].buffer)
        if (buffer[i].fd == fd)
            return (i);
    return (i);
}

static int is_exist(t_buffer *buffer, const int fd)
{
    int i = -1;

    if (buffer == NULL)
        return (0);
    while (buffer[++i].buffer)
        if (buffer[i].fd == fd)
            return (1);
    return (0);
}

static void fill_struct(t_buffer **buffer, const int fd)
{
    int i = -1;
    t_buffer *b = malloc(sizeof(t_buffer));

    if (*buffer == NULL) {
        if ((*buffer = malloc(sizeof(t_buffer *) * 1000)) == NULL)
            return;
        b->fd = fd;
        fill_buffer(&(b->buffer), fd);
        (*buffer)[0] = *b;
        (*buffer)[1].buffer = NULL;
    } else {
        i = search_struct(*buffer, fd);
        b->fd = fd;
        fill_buffer(&(b->buffer), fd);
        (*buffer)[i] = *b;
        (*buffer)[i + 1].buffer = NULL;
    }
}

char *get_next_line(const int fd)
{
    static t_buffer *buffer;
    char *result;
    int s;
    int i;

    if (fd == -1)
        return (NULL);
    s = search_struct(buffer, fd);
    if (buffer == NULL || !is_exist(buffer, fd) || buffer[s].buffer[0] == 0)
        fill_struct(&buffer, fd);
    if (buffer == NULL)
        return (NULL);
    s = search_struct(buffer, fd);
    if (buffer[s].buffer[0] == 0)
        return (NULL);
    i = fill_result(&result, &(buffer[s].buffer));
    if (i == -1)
        return (NULL);
    result[i] = 0;
    if (i != 0 && result[i - 1] == '\n')
        result[i - 1] = 0;
    else
        result = my_strmcat(result, get_next_line(fd));
    return (result);
}
