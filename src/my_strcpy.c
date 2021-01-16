/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** copy a string in an other
*/

#include <stddef.h>

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
