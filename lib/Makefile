##
## EPITECH PROJECT, 2025
## My_printf
## File description:
## Makefile lib
##

SRC = 	src/my_putnbr_base.c	\
		src/my_printf.c			\
		src/flag_int.c 			\
		src/flag_int_sig.c 		\
		src/flag_octal.c 		\
		src/flag_hexa_min.c		\
		src/flag_hexa_maj.c		\
		src/flag_char.c 		\
		src/flag_str.c 			\
		src/flag_pointeur.c 	\
		src/flag_pourcentage.c 	\
		src/flag_binary.c 		\
		src/flag_str_print.c 	\
	  	my/my_putstr.c			\
	  	my/my_putchar.c 		\
	  	my/my_strlen.c			\
	  	my/my_put_nbr.c			\
		my/my_power.c 			\
		my/my_revstr.c			\
		my/my_swap_char.c

HEADER = my.h

NAME = libmy.a

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror -I../include

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	cp my/$(HEADER) ../include/

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re