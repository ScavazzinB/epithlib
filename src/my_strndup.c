/*
** EPITECH PROJECT, 2024
** epithlib
** File description:
** my_strndup.c
*/

#include "../include/epithlib.h"
#include <stdlib.h>

char *my_strndup(char *str, int n)
{
    char *new_str = malloc(sizeof(char) * (n + 1));
    int i = 0;

    if (new_str == NULL)
        return NULL;
    while (str[i] != '\0' && i < n) {
        new_str[i] = str[i];
        i++;
    }
    new_str[i] = '\0';
    return new_str;
}
