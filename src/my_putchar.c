/*
** EPITECH PROJECT, 2024
** epithlib
** File description:
** my_putchar.c
*/

#include "epithlib.h"
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
