/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** Hello < olleH
*/

#include "my.h"

char *revstr(char const *str)
{
    int i = my_strlen(str) - 1;
    char *str2 = my_strdup(str);

    for (int j = 0; j < i; j++) {
        char tmp = str[i];
        str2[i] = str[j];
        str2[j] = tmp;
        i--;
    }
    str2[my_strlen(str)] = '\0';
    return (str2);
}
