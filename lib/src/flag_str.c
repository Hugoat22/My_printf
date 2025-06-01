/*
** EPITECH PROJECT, 2025
** My_printf
** File description:
** function display string
*/

#include "../my/my.h"

int flag_str(va_list args)
{
    return my_putstr(va_arg(args,char *));
}