SRC = ft_printf.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
CC = cc
LIBC = ar rcs
RM = rm -f
LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a
MAIN_SRC = main.c
MAIN_EXEC = main

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(LIBC) $(NAME) $(OBJ)

$(LIBFT):
	make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all


main: $(NAME) $(MAIN_SRC)
	$(CC) $(CFLAGS) -o $(MAIN_EXEC) $(MAIN_SRC) $(NAME) $(LIBFT)
	./$(MAIN_EXEC)

debug: $(NAME) $(MAIN_SRC)
	$(CC) $(CFLAGS) -g -o $(MAIN_EXEC) $(MAIN_SRC) $(NAME) $(LIBFT)