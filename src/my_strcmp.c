/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** compare 2 string
*/

#include <stddef.h>

int my_strcmp(char const *s1, char const *s2)
{
    size_t i = 0;

    while (s1[i] == s2[i] && s1[i] && s2[i]) {
        i += 1;
    }
    if (s1[i] == '\0' && s2[i] == '\0') {
        return (0);
    }
    return (s1[i] - s2[i]);
}
