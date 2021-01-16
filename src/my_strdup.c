/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** duplicate a string
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    char *dup = NULL;

    dup = malloc(sizeof(char) * (my_strlen(src) + 1));
    if (dup == NULL) {
        return (NULL);
    }
    my_strcpy(dup, src);
    return (dup);
}
