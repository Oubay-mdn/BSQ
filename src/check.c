/*
** EPITECH PROJECT, 2020
** check.c
** File description:
** all the checker of the bsq
*/

#include "my.h"

void check_big(bsq_t *bsq, int x, int y)
{
    int low;

    if (bsq->binar[x][y] == 1) {
        low = bsq->binar[x][y - 1];
        low = bsq->binar[x -1][y - 1] < low ? bsq->binar[x -1][y - 1] : low;
        low = bsq->binar[x -1][y] < low ? bsq->binar[x -1][y] : low;
        bsq->binar[x][y] = low + 1;
    }
    if (bsq->binar[x][y] > bsq->big) {
        bsq->big = bsq->binar[x][y];
        bsq->x = x;
        bsq->y = y;
    }
}

void check_biggest_square(bsq_t *bsq)
{
    for (int a = 1; a < bsq->nbr_line; a++) {
        for (int b = 1; b < bsq->nbr_col; b++) {
            check_big(bsq, a, b);
        }
    }
}

void check_one_col(bsq_t *bsq)
{
    for (int x = 0; x < bsq->nbr_line; x++) {
        for (int y = 0; y < bsq->nbr_col; y++) {
            bsq->x = (bsq->binar[x][y] > bsq->big) ? x : bsq->x;
            bsq->y = (bsq->binar[x][y] > bsq->big) ? y : bsq->y;
            bsq->big = (bsq->binar[x][y] > bsq->big) ? bsq->binar[x][y] :
            bsq->big;
        }
    }
}