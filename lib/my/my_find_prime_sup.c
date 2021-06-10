/*
** EPITECH PROJECT, 2020
** my_find_prime_sup.c
** File description:
** trouver prime
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    int res = my_is_prime(nb);

    if (res == 1)
        return (nb);
    else {
        while (my_is_prime(nb) == 0){
            nb++;
        } return (nb);
    }
}
