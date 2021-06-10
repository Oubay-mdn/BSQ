/*
** EPITECH PROJECT, 2020
** my_strlowcase.c
** File description:
** my_strlowcase
*/

char *my_strlowcase(char *str)
{
    if (str == 0)
        return (0);
    for (int i = 0; str[i] < '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
    }
    return (str);
}