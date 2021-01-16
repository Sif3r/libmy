/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** dispplay an int
*/

#include "my.h"

void putnbr(int nb)
{
    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb >= 10) {
        putnbr(nb / 10);
    }
    my_putchar((nb % 10) + '0');
}