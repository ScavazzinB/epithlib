/*
** EPITECH PROJECT, 2024
** epithlib
** File description:
** my_strcat.c
*/

#include "../include/epithlib.h"
#include <stdlib.h>

char *my_strcat(char *dest, char *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
