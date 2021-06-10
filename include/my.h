 /*
** EPITECH PROJECT, 2020
** my.h
** File description:
** for bsq
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct bsq_s{
    int nbr_line;
    int nbr_col;
    char *buffer;
    char **buffer_double;
    int **binar;
    int big;
    int x;
    int y;
}bsq_t;

int main(int argc, char **argv);
int open_file(char const *fp, bsq_t *bsq);
void check_big(bsq_t *bsq, int i, int j);
void check_biggest_square(bsq_t *bsq);
void change_to_x_col(bsq_t *bsq);
int tab_convert(bsq_t *bsq);
int check_nbl(char *buffer);
int my_getnbr(char const *str);
int nb_nbr(int nb);
void change_to_x(bsq_t *bsq);
void character_to_int(bsq_t *bsq);
void nb_skip(bsq_t *bsq);
void init_struct(bsq_t *bsq);
void print_square(bsq_t *bsq);
void check_one_col(bsq_t *bsq);

#endif /* !MY_H_ */
