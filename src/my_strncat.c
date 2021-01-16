/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** the function concatenates n character of a strings
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, size_t n)
{
    size_t i = 0;
    size_t len = my_strlen(dest);

    for (; i < n && src[i] != '\0'; i++) {
        dest[len + i] = src[i];
    }
    dest[len + i] = '\0';
    return (dest);
}
