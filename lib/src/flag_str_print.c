/*
** EPITECH PROJECT, 2025
** My_printf
** File description:
** function string printable
*/

#include "../my/my.h"

int flag_str_print(va_list args)
{
    int count = 0;
    char *str = va_arg(args,char *);

    for (int i = 0;str[i] != '\0';i++)
    {
        if(' ' <= str[i] && str[i] <= '~') {
            count += my_putchar(str[i]);
        } else {
            count += my_putchar('\\');
            count += my_putnbr_base(str[i],"01234567");
        }
    }
    return count;
}