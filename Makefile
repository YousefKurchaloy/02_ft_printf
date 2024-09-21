CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_puthexp.c
NAME = libftprintf.a
OBJ = $(SRC:.c=.o)

all: $(NAME)
	ar rcs $(NAME) $(OBJ)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re