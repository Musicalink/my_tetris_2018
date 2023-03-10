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

int my_isneg(int);

int my_put_nbr(int);

int my_swap(int *, int *);

int my_putstr(char *);

int my_putnstr(char *, int);

int my_strlen(char *);

int my_strtablen(char **);

int my_getnbr(char *);

void my_sort_int_tab(int *, int);

void my_sort_str_tab(char **);

int my_power_rec(int, int);

int my_square_root(int);

int my_is_prime(int);

int my_find_prime_sup(int);

char *my_strcpy(char *, char *);

char *my_strncpy(char *, char *, int);

char *my_revstr(char *);

char *my_strstr(char *, char *);

int my_strcmp(char *, char *);

int my_stricmp(char *, char *);

int my_strncmp(char *, char *, int);

char *my_strupcase(char *);

char *my_strlowcase(char *);

char *my_strcapitalize(char *);

int my_str_isalpha(char *);

int my_str_isnum(char *);

int my_str_islower(char *);

int my_str_isupper(char *);

int my_str_isprintable(char *);

int my_showstr(char *);

char *my_strcat(char *, char *);

char *my_strncat(char *, char *, int);

int my_putnbr_base(int, char *);

int my_getnbr_base(char *, char *);

char *my_strdup(char *);

int my_show_wordtab(char **);

char **my_str_to_wordtab(char *);

char *convert_base(char *, char *, char *);

int my_fact_rec(int);

void *my_memset(void *, int, int);

char *my_memset_str(char *, char, int);

char *my_int_to_str(int, char *);

int my_str_contains(char, char *);

int my_char_isfactor(char);

char *get_next_line(const int);

char **my_strsplit(char *, char);

char *my_strmcat(char *, char *);

#endif /* !MY_H_ */
