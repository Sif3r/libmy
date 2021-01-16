/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** checks if it is a prime number
*/

int isprime(int nb)
{
    int i = 1;

    if (nb <= 1) {
        return (0);
    } else if (nb == 2) {
        return (1);
    }
    while (i <= nb / i) {
        i++;
        if ((nb % i) == 0) {
            return (0);
        }
    }
    return (1);
}
