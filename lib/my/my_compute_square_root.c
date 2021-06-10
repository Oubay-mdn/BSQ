/*
** EPITECH PROJECT, 2020
** my_compute_square_root.c
** File description:
** racine carree
*/

int my_compute_square_root(int nb)
{
    int sq;
    int i = 1;

    while (sq < nb) {
        sq = i*i;
        i++;
    }
    if (sq == nb) {
        return (i-1);
    }
    else {
        return (0);
    }
}
