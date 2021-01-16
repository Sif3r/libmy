/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** return 1 if the string contains only letter
*/

int str_isalpha(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] < 'A' && str[i] > 'Z') || (str[i] < 'a' && str[i] > 'z')) {
            return (0);
        }
    }
    return (1);
}
