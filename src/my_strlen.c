/*
** EPITECH PROJECT, 2024
** epithlib
** File description:
** my_strlen.c
*/

#include "../include/epithlib.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}
