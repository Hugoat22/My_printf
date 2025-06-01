/*
** EPITECH PROJECT, 2025
** My_printf
** File description:
** function display number in octal base
*/

#include "../my/my.h"

int flag_octal(va_list args)
{
    return my_getnbr_base(va_arg(args, unsigned int),"01234567");
}