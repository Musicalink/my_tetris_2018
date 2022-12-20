/*
** EPITECH PROJECT, 2019
** PSU
** File description:
** tetris
*/

char *my_revstr(char *str)
{
    int length;
    int count = 0;
    char temp;

    while (str[count] != 0) {
        count += 1;
    }
    length = count;
    if (length > 1) {
        count = 0;
        while (count < length / 2) {
            temp = str[count];
            str[count] = str[length - count - 1];
            str[length - count - 1] = temp;
            count += 1;
        }
    }
    return (str);
}
