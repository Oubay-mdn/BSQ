/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** putstr
*/

int my_putstr(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        my_putchar(str[count]);
        count++;
    }
}
