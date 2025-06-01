##
## EPITECH PROJECT, 2025
## My_printf
## File description:
## Makefile lib
##

SRC = My_printf.c

NAME = libmy.a

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror -I../include

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re