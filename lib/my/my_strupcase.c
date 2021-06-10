/*
** EPITECH PROJECT, 2020
** my_strupcase.c
** File description:
** my_strupcase
*/

char *my_strupcase(char *str)
{
    if (str == 0)
        return (0);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] < 123)
            str[i] = str[i] - 32;
    }
    return (str);
}