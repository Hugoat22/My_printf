/*
** EPITECH PROJECT, 2025
** My_printf
** File description:
** function display character
*/

#include "../my/my.h"

int flag_char(va_list args)
{
    return my_putchar((char)va_arg(args, int));
}