/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** computes the square root
*/

int my_sqrt(int nb)
{
    int i = 1;

    while (i * i < nb) {
        i++;
        if (i * i == nb) {
            return (i);
        }
        if (i * i > nb) {
            return (0);
        }
    }
    return (0);
}
