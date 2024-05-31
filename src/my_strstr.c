/*
** EPITECH PROJECT, 2024
** epithlib
** File description:
** my_strstr.c
*/

#include "../include/epithlib.h"
#include <stdio.h>

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if (str[i] == to_find[j]) {
            while (str[i] == to_find[j] && to_find[j] != '\0') {
                i++;
                j++;
            }
            if (to_find[j] == '\0')
                return &str[i - j];
            j = 0;
        }
        i++;
    }
    return NULL;
}
