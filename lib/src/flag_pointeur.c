/*
** EPITECH PROJECT, 2025
** My_printf
** File description:
** function display adresse
*/

#include "../my/my.h"

int flag_pointeur(va_list args)
{
    int count = 0;
    count += my_putstr("0x");
    return count;
    (void)args;
    //count += my_putnbr_base(va_arg(args, void *),"0123456789abcdef");
    return count;
}