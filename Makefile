##
## EPITECH PROJECT, 2025
## My_printf
## File description:
## Makefile main
##

NAME = my_printf
LIB_DIR = lib
LIB = $(LIB_DIR)/libmy.a
SRC = main.c

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror -I include -L $(LIB_DIR)
LDLIBS = -lmy

all: $(LIB) $(NAME)

$(LIB):
	$(MAKE) -C $(LIB_DIR)

$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME) $(CFLAGS) $(LDLIBS)

clean:
	rm -f $(OBJ)
	$(MAKE) clean -C $(LIB_DIR)

fclean: clean
	rm -f $(NAME)
	$(MAKE) fclean -C $(LIB_DIR)

re: fclean all

.PHONY: all clean fclean re