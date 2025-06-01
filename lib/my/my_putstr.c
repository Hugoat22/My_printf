/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** fonction display string
*/

#include "my.h"

int my_putstr(char const *str)
{
    int count = my_strlen(str);
    for (int i = 0;i != count;i++) my_putchar(str[i]);
    return count;
}