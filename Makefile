CC = cc
FLAGS = -Wall -Werror -Wextra
SRCS = ft_printf.c ft_putchar.c ft_putstr.c ft_puthexp.c ft_putnbr.c
# this replaces the .c extension with .o
# so ft_printf.c becomes ft_printf.o
# it substitutes the pattern %c with the pattern %o
# it doesn't compile the source files
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a

all: $(NAME)

#ar: archiver(create static library(.a))
#rcs:
#r: insert the files in the archive without checking for duplicates
#c: create the archive if it does not exist
#s: write an index to the archive
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# implicit rule
# make has implicit rules for compiling C source files
# and this rule is one of them
# -c: compile or assemble the source files, but do not link
# $@: the target
# -o: the file to write the output to
# $<: the first prerequisite
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

# clean: remove object files
# -f: force the removal of the files without confirmation
clean:
	rm -f $(OBJS)

# fclean: remove object files and the executable
fclean: clean
	rm -f $(NAME)

# re: remove object files, the executable and recompile
re: fclean all

# .PHONY: the target is not a file
.PHONY: all clean fclean re
