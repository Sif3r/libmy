/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** returns the factorial of a number
*/

int factorial(int nb)
{
    int nbcpy = nb;

    if (nb == 0) {
        return (1);
    } else if (nb < 0) {
        return (0);
    }
    for (int i = 1; i < nbcpy; i++) {
        nb *= i;
    }
    return (nb);
}
