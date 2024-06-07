SRC = ft_printf.c ft_printstr.c ft_printchar.c ft_putnbr.c ft_putunsinged.c ft_putptr.c ft_printhex.c
OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a
CC = cc
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



# main: $(NAME) $(MAIN_SRC)
# 	$(CC) $(CFLAGS) -o $(MAIN_EXEC) $(MAIN_SRC) $(NAME) 
# 	./$(MAIN_EXEC)

# debug: $(NAME) $(MAIN_SRC)
# 	$(CC) $(CFLAGS) -g -o $(MAIN_EXEC) $(MAIN_SRC) $(NAME)