/*
** EPITECH PROJECT, 2020
** my_strcapitalize.c
** File description:
** my_strcapitalize
*/

char *my_strcapitalize(char *str)
{
    if (str[0] == '\0')
        return (str);
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            if (str[i - 1] != ' ')
                str[i] += 32;
        if (str[i] >= 'a' && str[i] <= 'z')
            if (str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+')
                str[i] -= 32;
    }
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    return (str);
}