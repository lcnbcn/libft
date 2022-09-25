# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 21:12:10 by lucida-s          #+#    #+#              #
#    Updated: 2022/09/25 21:20:38 by lucida-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_isalpha.c ft_toupper.c ft_isdigit.c \
	ft_tolower.c ft_isalnum.c ft_strlen.c \
	ft_isprint.c ft_isascii.c

OBJS = $(SRC:.c=.o)
HEADER = libft.h
LIB = ar -rcs
CFLAGS = -Wall -Werror -Wextra

%.o:%.c
	gcc $(CFLAGS) -I libft.h -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(LIB) $(NAME) $(OBJS)


clean:
	rm -f  $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
