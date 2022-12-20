/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#include <stdlib.h>
#include "tetris.h"

static int fill_arg_max(t_pre_pars *p, char **arg)
{
    char **tab = init_arg_max();
    char ***val = init_val(p);
    char *tmp;
    int i = -1;

    while (tab[++i] && arg[1])
        if (!my_strcmp(arg[0], tab[i])) {
            tmp = spe_pure(my_strdup(arg[1]));
            *(val[i]) = tmp;
            free(tab);
            free(val);
            free_tab(&arg);
            return (0);
        }
    free(tab);
    free(val);
    free_tab(&arg);
    my_puterror("Invalid argument.\n");
    exit(84);
}

static int fill_arg_min(t_pre_pars *p, char *arg, char *arg2)
{
    char **tab = init_arg_min();
    char *tmp;
    char ***val = init_val(p);
    int i = -1;

    while (tab[++i] && arg2)
        if (!my_strcmp(arg, tab[i])) {
            tmp = spe_pure(my_strdup(arg2));
            *(val[i]) = tmp;
            free(tab);
            free(val);
            return (1);
        }
    free(tab);
    free(val);
    my_puterror("Invalid argument.\n");
    exit(84);
}

static int fill_arg(t_pre_pars *p, char **av, int i)
{
    char *arg;

    arg = av[i] + 1;
    if (!my_strcmp(arg, "d") || !my_strcmp(arg, "-debug"))
        return (0 * (long)(p->d = "true"));
    else if (!my_strcmp(arg, "-help"))
        return (my_help(av[0]));
    else if (!my_strncmp(av[i], "--", 2))
        return (fill_arg_max(p, my_strsplit(arg + 1, '=')));
    else
        return (fill_arg_min(p, arg, av[i + 1]));
}

void my_super_parser(t_pars *p, char **av)
{
    int i = 0;
    t_pre_pars pp;

    init_pars(&pp);
    while (av[++i])
        if (av[i][0] == '-')
            i += fill_arg(&pp, av, i);
        else
            exit(my_puterror("Invalid argument.\n") + 84);
    set_pars(&pp, p);
}