/*
** EPITECH PROJECT, 2025
** My_printf
** File description:
** function display number in hexadecimal upper
*/

#include "../my/my.h"

int flag_hexa_maj(va_list args)
{
    return my_putnbr_base(va_arg(args, unsigned int),"0123456789ABCDEF");
}