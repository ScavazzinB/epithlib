/*
** EPITECH PROJECT, 2024
** epithlib
** File description:
** my_putstr.c
*/

#include "epithlib.h"

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
