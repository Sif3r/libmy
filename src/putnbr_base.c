/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** change the decimal base to another
*/

#include "my.h"

void putnbr_base(unsigned int nb, char const *base)
{
    int res[32];
    int i = 0;

    if (nb == 0) {
        my_putchar('0');
    } else {
        for (i = 0; nb; i++) {
            int len = my_strlen(base);
            res[i] = nb % len;
            nb /= len;
        }
    }
    while (0 <= --i) {
        my_putchar(base[res[i]]);
    }
}
