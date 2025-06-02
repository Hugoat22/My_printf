/*
** EPITECH PROJECT, 2025
** My_printf
** File description:
** function main
*/

#include "include/my.h"

int main(void)
{
    int count = 0;
    count = my_printf("hugo %S\n","coucou\tc'est moi");
    my_put_nbr(count);
    my_putchar('\n');
    return 1;
}