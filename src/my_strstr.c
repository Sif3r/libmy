/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** finds the first occurence of the substring
*/

#include <stddef.h>

char *my_strstr(char *str, char const *to_find)
{
    for (int i = 0; str[i] != '\0'; i++) {
        for (int j = 0; to_find[j] == str[i + j]; j++) {
            if ((to_find[j + 1]) == '\0') {
                return (str + i);
            }
        }
    }
    return (NULL);
}
