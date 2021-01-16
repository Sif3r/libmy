/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** compare the n bytes of 2 string
*/

#include <stddef.h>

int my_strncmp(char const *s1, char const *s2, size_t n)
{
    size_t i = 0;

    while (i < n && s1[i] == s2[i]) {
        i++;
    }
    if (i == n) {
        return (0);
    } else {
        return (s1[i] - s2[i]);
    }
}
