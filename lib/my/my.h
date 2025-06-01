/*
** EPITECH PROJECT, 2025
** My_printf
** File description:
** header lib
*/

#ifndef MY_H_
#define MY_H_

    #include <unistd.h>
    #include <stdarg.h>

    //lib
    int my_putstr(char const *str);
    int my_putchar(char c);
    int my_strlen(char const *str);
    int my_put_nbr(int nb);
    int my_power(int nbr,int pow);
    char *my_revstr(char *str);
    void my_swap_char(char *a, char *b);

    //printf

    typedef int (*func_printf)(va_list);
    
    typedef struct {
        char flag;
        func_printf func;
    }list_func;
    
    int flag_int_sig(va_list args);
    int flag_int(va_list args);
    int flag_octal(va_list args);
    int flag_hexa_min(va_list args);
    int flag_hexa_maj(va_list args);
    int flag_char(va_list args);
    int flag_str(va_list args);
    int my_printf(char const *format, ...);
    int my_putnbr_base(unsigned int nbr, char const *base);

#endif /* !MY_H_ */