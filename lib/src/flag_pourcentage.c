/*
** EPITECH PROJECT, 2025
** My_printf
** File description:
** function display %
*/

#include "../my/my.h"

int flag_pourcentage(va_list args)
{
    (void)args;
    return my_putchar('%');
}