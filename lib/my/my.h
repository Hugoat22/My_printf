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

    //printf

    typedef int (*func_printf)(va_list);
    
    typedef struct {
        char flag;
        func_printf func;
    }list_func;
    

    int my_printf(char const *format, ...);

#endif /* !MY_H_ */