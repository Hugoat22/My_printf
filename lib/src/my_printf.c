/*
** EPITECH PROJECT, 2025
** My_printf
** File description:
** function call function in printf
*/

#include "../my/my.h"

list_func all_func[] = {
    {'d',flag_int_sig},
    {'i',flag_int_sig},
    {'u',flag_int},
    {'o',flag_octal},
    {'\0', NULL}
};

int check_flags(int *i,char const *format,va_list args)
{
    (*i)++;
    for (int j = 0;all_func[j].func != NULL;j++) {
        if (all_func[j].flag == format[(*i)]) {
            return all_func[j].func(args);
        }
    }
    return my_putchar('%') + my_putchar(format[(*i)]);
}

int my_printf(char const *format, ...)
{
    va_list args;
    va_start(args, format);
    int count = 0;
    
    for (int i = 0; format[i] != '\0';i++) {
        if (format[i] == '%') {
            count += check_flags(&i,format,args);
        } else {
            count += my_putchar(format[i]);
        }
    }

    return count;
}