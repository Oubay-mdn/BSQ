/*
** EPITECH PROJECT, 2020
** my_strncmp.c
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (s1 == 0 || s2 == 0)
        return (0);
    if (s1[i] == '\0' && s2[i] == '\0')
        return (0);
    while (n > 1 && s1[i] == s2[i]) {
        i++;
        if (s1[i] == '\0')
            return (0);
    }
    return (s1[i] - s2[i]);
}