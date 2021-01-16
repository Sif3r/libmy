/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** return 1 if the string contains only upper letter
*/

int str_isupper(char const *str)
{
    for (int i = 0; str[i] != 0; i++) {
        if (str[i] < 'A' || str[i] > 'Z') {
            return (0);
        }
    }
    return (1);
}
