/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** revstr
*/

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i]; i++);
    return (i);
}

char *my_revstr(char *str)
{
    char temp;
    int b = 0;

    for (int i = my_strlen(str) - 1; i >= b; i--) {
        temp = str[i];
        str[i] = str[b];
        str[b] = temp;
        b++;
    }
    return (str);
}
