/*
** EPITECH PROJECT, 2024
** epithlib
** File description:
** my_strdup.c
*/

#include "../include/epithlib.h"
#include <stdlib.h>

char *my_strdup(char *str)
{
    char *new_str = malloc(sizeof(char) * (my_strlen(str) + 1));
    int i = 0;

    if (new_str == NULL)
        return NULL;
    while (str[i] != '\0') {
        new_str[i] = str[i];
        i++;
    }
    new_str[i] = '\0';
    return new_str;
}
