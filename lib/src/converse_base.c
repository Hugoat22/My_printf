/*
** EPITECH PROJECT, 2025
** My_printf
** File description:
** function converse number in base
*/

#include "../my/my.h"

int my_getnbr_base(unsigned int nbr, char const *base)
{
    int size = my_strlen(base);
    char res[1024];
    int count = 0;

    while (nbr / size != 0) {
        res[count] = base[nbr % size];
        nbr /= size;
        count++;
    }
    res[count++] = base[nbr % size];
    res[count++] = '\0';
    return my_putstr(my_revstr(res));
}