# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 21:12:10 by lucida-s          #+#    #+#              #
#    Updated: 2022/09/23 22:19:47 by lucida-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_isalpha.c
OBJS = $(SRC:.c=.o)
HEADER = libft.h
LIB = ar -rcs
CFLAGS = -Wall -Werror -Wextra

%.o: %.c
	gcc $(CFLAGS) -I./ -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(LIB) $(NAME) $(OBJS)


clean:
	rm -f  $(OBJS)

fclean: clean
	rm -f $(NAME)

re: all clean fclean

.PHONY: all clean fclean re
