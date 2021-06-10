/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** puissance rec
*/

int my_compute_power_rec(int nb, int power)
{
    if (power < 0) {
        return (0);
    }
    if (power == 0) {
        return (1);
    }
    else {
        return (nb * my_compute_power_rec(nb, power - 1));
    }
}
