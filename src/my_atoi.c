/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** as atoi works
*/

#define ISSPACE(c) (c == '\t' || c == '\f' || \
                    c == '\v' || c == '\r' || \
                    c == '\n' || c == ' ' ? 1 : 0)

int my_atoi(char const *str)
{
    int stck = 0;
    int sign = 1;

    while (ISSPACE(*str)) {
        str += 1;
    }
    if (*str == '-') {
        sign = -1;
        str += 1;
    }
    for (; *str != '\0'; str++) {
        if (*str >= '0' && *str <= '9') {
            stck *= 10;
            stck += *str - '0';
        }
    }
    return (stck * sign);
}
