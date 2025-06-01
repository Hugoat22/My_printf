/*
** EPITECH PROJECT, 2025
** My_printf
** File description:
** function display unsig int
*/

#include "../my/my.h"

unsigned int my_power_uns(int nbr,int pow)
{
    if (pow == 0)
        return 1;
    if (pow == 1)
        return nbr;
    return nbr * my_power(nbr,pow - 1);
}
int my_put_uns(unsigned int nb)
{
    int count = 0;
    int size = 0;
    unsigned int res = 0;

    if (nb == 0) return my_putchar(48);
    for (;nb >= my_power_uns(10,size);size++);
    for (int i = size-1;i != -1;i--) {
        res = nb / my_power_uns(10,i);
        nb -= res * my_power_uns(10,i);
        count += my_putchar(res + 48);
    }
    return count;
}

int flag_int(va_list args)
{
    return my_put_uns(va_arg(args,unsigned int));
}