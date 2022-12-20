/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <stdlib.h>
#include "my.h"

static int get_word_count(char *str, char split)
{
    int count = 0;
    int i = 0;

    while (str[i] != 0) {
        if (str[i] == split)
            count += 1;
        i += 1;
    }
    return (count + 1);
}

static char **init_tab(char *str, char **tab, char split)
{
    int i = 0;
    int count = my_strlen(str);
    int word = get_word_count(str, split) - 1;

    tab = malloc(sizeof(char *) * (word + 2));
    if (tab == NULL)
        return ((char **)(long)my_puterror("error"));
    while (word >= 0) {
        if ((tab[word] = malloc(sizeof(char) * count + 1)) == NULL)
            return ((char **)(long)my_puterror("error"));
        tab[word][0] = 0;
        word -= 1;
    }
    return (tab);
}

char **my_strsplit(char *str, char split)
{
    int i = -1;
    int j = 0;
    int k = 0;
    char **wordtab = init_tab(str, wordtab, split);

    while (str[++i] != 0)
        if (str[i] == split && k != 0) {
            k = 0;
            j += 1;
        } else if (str[i] != split) {
            wordtab[j][k] = str[i];
            wordtab[j][k + 1] = 0;
            k += 1;
        }
    if (wordtab[j][0] == 0)
        wordtab[j] = NULL;
    wordtab[j + 1] = NULL;
    return (wordtab);
}
