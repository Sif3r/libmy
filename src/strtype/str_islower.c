/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** return 1 if the string contains only lower letter
*/

int str_islower(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'a' && str[i] > 'z') {
            return (0);
        }
    }
    return (1);
}
