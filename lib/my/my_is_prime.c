/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

static int my_sqrt(int nb)
{
    int sqrt = nb;

    while (sqrt * sqrt > nb || sqrt != sqrt * sqrt / sqrt)
        sqrt /= 2;
    return (sqrt * 2);
}

int my_is_prime(int nb)
{
    int i = 2;
    int sqrt = my_sqrt(nb);

    while (sqrt >= i) {
        if (nb % i == 0)
            return (0);
        i += 1;
    }
    return (1);
}
