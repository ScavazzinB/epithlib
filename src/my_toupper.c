/*
** EPITECH PROJECT, 2024
** epithlib
** File description:
** my_toupper.c
*/

#include "../include/epithlib.h"

char my_toupper(char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}
