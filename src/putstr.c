/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** displays a string of characters
*/

#include <unistd.h>
#include "my.h"

void putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
