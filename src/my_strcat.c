/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** the function concatenates two strings
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    my_strcpy (dest + my_strlen(dest), src);
    return (dest);
}
