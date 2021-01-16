/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** return 1 if the string contains only letter and number
*/

#define ISALPHA(c) ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0)
#define ISDIGIT(c) (c >= '0' && c <= '9' ? 1 : 0)

int str_isalnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (ISALPHA(str[i]) == 0 && ISDIGIT(str[i]) == 0) {
            return (0);
        }
    }
    return (1);
}
