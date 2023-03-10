/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#ifndef PARSER_H_
# define PARSER_H_

#include <curses.h>

# define DEF_L        "1"
# define DEF_KL        "kcub1"
# define DEF_KR        "kcuf1"
# define DEF_KT        "kcuu1"
# define DEF_KD        "kcud1"
# define DEF_KQ        "q"
# define DEF_KP        " "
# define DEF_MAPSIZE    "20,10"
# define DEF_W        "0"
# define DEF_D        "false"

typedef struct s_pars {
    int l;
    char *kl;
    char *kr;
    char *kt;
    char *kd;
    char *kq;
    char *kp;
    int row;
    int col;
    int w;
    int d;
} t_pars;

typedef struct s_pre_pars {
    char *l;
    char *kl;
    char *kr;
    char *kt;
    char *kd;
    char *kq;
    char *kp;
    char *w;
    char *d;
    char *map_size;
} t_pre_pars;

void my_super_parser(t_pars *, char **);

char ***init_val(t_pre_pars *);

char **init_arg_max();

char **init_arg_min();

void init_pars(t_pre_pars *);

void set_pars(t_pre_pars *, t_pars *);

int contains_tab(char *, char **);

int contains_char(char *, char);

char *spe_pure(char *);

int my_help(char *);

#endif /* !PARSER_H_ */
