/*
** EPITECH PROJECT, 2025
** My_printf
** File description:
** function display number
*/

#include "../my/my.h"

int flag_int_sig(va_list args)
{
    return my_put_nbr(va_arg(args,int));
}