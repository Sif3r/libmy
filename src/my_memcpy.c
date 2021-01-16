/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** as memcpy works
*/

#include <stddef.h>

void *my_memcpy(void *dest, void const *src, size_t len)
{
    char *d = dest;
    char const *s = src;

    while (len--) {
        *d++ = *s++;
    }
  return (dest);
}
