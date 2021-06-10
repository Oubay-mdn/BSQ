/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main for the bsq
*/

#include "my.h"

void init_struct(bsq_t *bsq)
{
    bsq->nbr_line = 0;
    bsq->nbr_col = 0;
    bsq->big = 0;
    bsq->x = 0;
    bsq->y = 0;
}

void nb_skip(bsq_t *bsq)
{
    int x = 0;
    int y = 0;
    bsq->nbr_line = my_getnbr(bsq->buffer);
    y = nb_nbr(bsq->nbr_line) + 1;
    for (y;bsq->buffer[y] != '\n'; y++, x++) {}
    bsq->nbr_col = x;
}

int open_file(char const *fp, bsq_t *bsq)
{
    int fd;
    int read_size = 0;
    bsq->buffer = NULL;
    struct stat bu;

    stat(fp, &bu);
    fd = open(fp, O_RDONLY);
    if (fd <= -1)
        return (84);
    bsq->buffer = malloc(bu.st_size + 1);
    read_size = read(fd, bsq->buffer, bu.st_size);
    if (bsq->buffer[0] == NULL)
        return (84);
    bsq->buffer[read_size] = '\0';
    close(fd);
    return (0);
}

void print_square(bsq_t *bsq)
{
    for (int i = 0; i < bsq->nbr_line; i++) {
        write(1, bsq->buffer_double[i], bsq->nbr_col);
        my_putchar('\n');
    }
}

int main(int argc, char **argv)
{
    struct stat buf;
    bsq_t bsq;
    int error = 0;

    if (argc != 2 || !argv || stat(argv[1], &buf) == -1)
        return (84);
    init_struct(&bsq);
    error = open_file(argv[1], &bsq);
    if (error == 84)
        return (84);
    nb_skip(&bsq);
    tab_convert(&bsq);
    character_to_int(&bsq);
    if (bsq.nbr_col < 2 || bsq.nbr_line < 2)
        check_one_col(&bsq);
    else
        check_biggest_square(&bsq);
    change_to_x(&bsq);
    print_square(&bsq);
    return (0);
}