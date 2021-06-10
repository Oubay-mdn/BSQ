/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** function that display a string
*/

int my_strlen(char const *str)
{
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }
    return (count);
}
