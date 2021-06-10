/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    if (dest == 0 || src == 0)
        return (0);
    for (; i < n && src[i]; i++)
        dest[i] = src[i];
    if (n == i)
        dest[i] != '\0';
    return (dest);
}
