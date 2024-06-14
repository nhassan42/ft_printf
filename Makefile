SRC = ft_printf.c ft_putnbr.c ft_putunsigned.c ft_putptr.c ft_puthex.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
CC = gcc
LIBC = ar rcs
RM = rm -f

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
