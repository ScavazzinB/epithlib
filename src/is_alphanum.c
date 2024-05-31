/*
** EPITECH PROJECT, 2024
** epithlib
** File description:
** is_alphanum.c
*/

#include "../include/epithlib.h"

int is_alphanum(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return 1;
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}
