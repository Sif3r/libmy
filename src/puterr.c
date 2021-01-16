/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** it's a putstr for error
*/

#include <unistd.h>
#include "my.h"

void puterr(char const *str)
{
    write(2, str, my_strlen(str));
}
