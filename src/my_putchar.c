/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** display a char
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
