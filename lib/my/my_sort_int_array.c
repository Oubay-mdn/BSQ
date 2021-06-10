/*
** EPITECH PROJECT, 2020
** my_sort_in_array.c
** File description:
** sort in array
*/

#include <unistd.h>

void my_sort_int_array(int *tab, int size)
{
    int j = 0;

    for (int i = 0; i < size; i++) {
        if (tab[i] > tab[i + 1]) {
            j = tab[i];
            tab[i] = tab [i + 1];
            tab[i + 1] = j;
            i = 0;
        }
    }
}