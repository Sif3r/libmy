/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** return the len of the string
*/

#include <stddef.h>

size_t my_strlen(char const *str)
{
    const char *s;

    for (s = str; *s != '\0'; ++s);
    return(s - str);
}
