/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** returns the nb raised to the power p
*/

int my_pow(int nb, int p)
{
    int cpy = nb;

    for (int i = 1; i < p; i++) {
        nb *= cpy;
    }
    return (nb);
}
