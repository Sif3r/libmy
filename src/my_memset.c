/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** filled out a part of a mem
*/

#include <stddef.h>

char *my_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = s;

    while (ptr[n] != '\0' && n > 0) {
        n--;
        ptr[n] = c;
    }
    return (s);
}
