/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef READ_SIZE
    # define READ_SIZE 256
#endif /* !READ_SIZE */

typedef struct s_buffer {
    int fd;
    char *buffer;
} t_buffer;

char *get_next_line(int);

void fill_buffer(char **, const int);

int fill_result(char **, char **);

#endif /* !GET_NEXT_LINE_H */
