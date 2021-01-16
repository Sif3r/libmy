/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** return 1 if is a printable string in ascii
*/

int str_isprint(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < ' ' || str[i] > '~') {
            return (0);
        }
    }
    return (1);
}
