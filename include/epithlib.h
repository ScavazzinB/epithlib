/*
** EPITECH PROJECT, 2024
** epithlib
** File description:
** epithlib.h
*/

#ifndef EPITHLIB_H_
 #define EPITHLIB_H_

    #include <unistd.h>

    void my_putchar(char c);
    void my_putstr(char *str);
    int my_strlen(char *str);
    int my_strcmp(char *s1, char *s2);
    int my_strncmp(char *s1, char *s2, int n);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_strcpy(char *dest, char const *src);
    char *my_strdup(char *src);
    char *my_strndup(char *src, int n);
    int my_str_isnum(char *str);
    char *my_strstr(char *str, char const *to_find);
    char *my_strcat(char *dest, char *src);
    char *my_strncat(char *dest, char const *src, int nb);
    int my_get_nbr(char *str);
    void my_put_nbr(int nb);
    int is_alphanum(char c);
    char my_toupper(char c);
    char my_tolower(char c);

#endif
