/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** Write a function that displays if t's + or -.
*/

#include <unistd.h>

int my_isneg(int nb)
{
    if (nb >= 0) {
        my_putchar('P');
    } else {
        my_putchar('N');
    }
    return (0);
}
