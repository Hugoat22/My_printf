/*
** EPITECH PROJECT, 2025
** My lib
** File description:
** fonction swap charactere
*/

void my_swap_char(char *a, char *b)
{
    char c = *a;
    *a = *b;
    *b = c;
}