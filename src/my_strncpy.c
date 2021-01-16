/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** copy a n byte of a string in an other
*/

#include <stddef.h>

char *my_strncpy(char *dest, char const *src, size_t n)
{
    size_t i = 0;

    for ( ; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for ( ; i < n; i++) {
        dest[i] = '\0';
    }
    return (dest);
}
