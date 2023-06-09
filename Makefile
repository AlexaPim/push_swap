NAME = push_swap

LIBFT = libft/libft.a

PATH_SRC = ./src/

SRC = $(PATH_SRC)main.c $(PATH_SRC)move_a.c $(PATH_SRC)move_b.c \
	$(PATH_SRC)sort.c $(PATH_SRC)utils.c $(PATH_SRC)radix.c $(LIBFT)

FLAGS = -Wall -Wextra -Werror

OBJ	= $(SRC:%.c=%.o)

%.o: %.c
	cc -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	cc $^ -o $@

$(LIBFT):
	make -C libft

clean:
	rm -f $(OBJ)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

