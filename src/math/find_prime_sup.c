/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** seeks a prime number greater than the given one
*/

#include "math.h"

int find_prime_sup(int nb)
{
    int check = isprime(nb);

    if (check == 1) {
        return (nb);
    }
    while (check != 1) {
        nb++;
        check = isprime(nb);
        if (check == 1) {
            return (nb);
        }
    }
    return (0);
}
