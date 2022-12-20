/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

#ifndef MY_H_
# define MY_H_

void my_putchar(char);

int my_puterror(char *);

int my_put_nbr(int);

int my_putstr(char *);

int my_strlen(char *);

int my_getnbr(char *);

int my_power_rec(int, int);

int my_is_prime(int);

int my_find_prime_sup(int);

char *my_revstr(char *);

char *my_strstr(char *, char *);

int my_strcmp(char *, char *);

int my_strncmp(char *, char *, int);

int my_getnbr_base(char *, char *);

char *my_strdup(char *);

int my_show_wordtab(char **);

int my_fact_rec(int);

void *my_memset(void *, int, int);

char *my_int_to_str(int, char *);

char *get_next_line(const int);

char **my_strsplit(char *, char);

char *my_strmcat(char *, char *);

#endif /* !MY_H_ */
