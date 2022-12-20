/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

void *my_memset(void *src, char c, int n)
{
    int i = -1;
    char *s = src;

    s = src;
    i = -1;
    while (++i < n)
        s[i] = c;
    return (src);
}
