/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** \nHello -> \0AHello
*/

#include "my.h"

void showstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '!' || str[i] > '~') {
            my_putchar('\\');
            if (str[i] < 16) {
                my_putchar('0');
            }
            putnbr_base(str[i], "0123456789ABCDEF");
        } else {
            my_putchar(str[i]);
        }
    }
}