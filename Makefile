NAME = libft.a
SRC = *.c
OBJS = $(SRC:.c=.o)
INCLUDE = libft.h
LIB = ar -rcs
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(NAME) $(OBJS)

fclean: clean
	rm -f $(NAME)

re: all clean fclean
