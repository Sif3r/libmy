/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** return 1 if the string contains only numbers
*/

int str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return (0);
        }
    }
    return (1);
}
