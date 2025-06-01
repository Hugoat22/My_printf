/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** Function display caractere
*/

#include "my.h"

int my_putchar(char c)
{
    return write(1, &c, 1);
}