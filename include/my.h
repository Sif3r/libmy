/*
** EPITECH PROJECT, 2019
** libmy
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stddef.h>

void *my_memcpy(void *dest, void const *src, size_t len);
void my_putchar(char c);
void puterr(char const *str);
void putnbr(int nb);
void putnbr_base(unsigned int nbr, char const *base);
void putstr (char const *str);
void showstr(char const *str);
int my_atoi(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, size_t n);
size_t my_strlen(char const *str);
char *my_memset(void *s, int c, size_t n);
char *my_strcat(char *dest, char const *src);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
char *my_strncat(char *dest, char const *src, size_t n);
char *my_strncpy(char *dest, char const *src, size_t n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
char *revstr(char const *str);
char *strcapitalize(char *str);
char *strlowcase(char *str);

#endif /* !MY_H_ */
