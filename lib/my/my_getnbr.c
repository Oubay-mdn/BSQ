/*
** EPITECH PROJECT, 2020
** my_getnbr.c
** File description:
** the getnbr
*/

#include <stdio.h>

int my_getnbr(char const *str)
{
    int negs = 1;
    int nb = 0;
    int i = 0;

    for (; str[i] != '\0' && (str[i] == '-' || str[i] == '+'); i++)
        if (str[i] == '-')
            negs = -negs;

    for (; str[i] >= '0' && str[i] <= '9'; i++) {
        nb = (nb * 10);
        nb = nb + (str[i] - '0');
        if (nb < 0)
            if (nb < -2147483648 || negs == 1)
                return (0);
    }
    return (nb * negs);
}
