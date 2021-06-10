/*
** EPITECH PROJECT, 2020
** my_is_prime.c
** File description:
** nombre premier
*/

int my_is_prime(int nb)
{
    int i;
    int div = 0;

    for (i = 1;i <= nb; i++) {
        if (nb % i == 0)
            div++;
    }
    if (div == 2)
        return (1);
    else
        return (0);
}
