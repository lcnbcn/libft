# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 21:12:10 by lucida-s          #+#    #+#              #
#    Updated: 2022/10/25 12:35:17 by lucida-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_isalpha.c ft_toupper.c ft_isdigit.c \
	ft_tolower.c ft_isalnum.c ft_strlen.c \
	ft_isprint.c ft_isascii.c ft_strchr.c \
	ft_strrchr.c ft_memset.c ft_bzero.c \
	ft_memcpy.c ft_memmove.c ft_strlcpy.c \
    ft_strlcat.c	

OBJS = $(SRC:.c=.o)
HEADER = libft.h
LIB = ar -rcs
CFLAGS = -Wall -Werror -Wextra

%.o:%.c
	gcc $(CFLAGS) -I $(HEADER) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(LIB) $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
