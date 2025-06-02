/*
** EPITECH PROJECT, 2025
** My_printf
** File description:
** function display binary
*/

#include "../my/my.h"

int flag_binary(va_list args)
{
    return my_putnbr_base(va_arg(args,unsigned int),"01");
}