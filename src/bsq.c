/*
** EPITECH PROJECT, 2020
** bsq.c
** File description:
** bsq
*/

#include "my.h"

int nb_nbr(int nb)
{
    int count = 0;

    while (nb != 0) {
        nb = nb / 10;
        count++;
    }
    return count;
}

void character_to_int(bsq_t *bsq)
{
    bsq->binar = malloc(sizeof(int *) * (bsq->nbr_line + 1));
    for (int x = 0; x < bsq->nbr_line; x++) {
        bsq->binar[x] = malloc(sizeof(int) * (bsq->nbr_col + 1));
        for (int y = 0; y < bsq->nbr_col; y++) {
            bsq->binar[x][y] = bsq->buffer_double[x][y] == '.' ? 1 : 0;
        }
    }
}

void change_to_x(bsq_t *bsq)
{
    int y = bsq->y - bsq->big + 1;
    int x = bsq->x - bsq->big + 1;

    while (x <= bsq->x) {
        while (y <= bsq->y) {
            bsq->buffer_double[x][y] = 'x';
            y++;
        }
        y = bsq->y - bsq->big + 1;
        x++;
    }
}

int tab_convert(bsq_t *bsq)
{
    int nb = nb_nbr(bsq->nbr_line) + 1;
    if (bsq->nbr_line <= 0)
        return (84);
    bsq->buffer_double = malloc(sizeof(char *) * (bsq->nbr_line + 1));
    for (int x = 0; x < bsq->nbr_line; x++) {
        bsq->buffer_double[x] = malloc(sizeof(char) * (bsq->nbr_col + 1));
        for (int y = 0; y < bsq->nbr_col; y++) {
            bsq->buffer_double[x][y] = bsq->buffer[nb];
            nb++;
        }
        nb++;
    }
}

void change_to_x_col(bsq_t *bsq)
{
    int y = bsq->y;
    int x = bsq->x;

    while (x <= bsq->big) {
        while (y <= bsq->big) {
            bsq->buffer_double[x][y] = 'x';
            y--;
        }
        y = bsq->y;
        x--;
    }
}