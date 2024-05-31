/*
** EPITECH PROJECT, 2024
** epithlib
** File description:
** my_tolower.c
*/

#include "../include/epithlib.h"

char my_tolower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}
