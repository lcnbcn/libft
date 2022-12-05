# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 21:12:10 by lucida-s          #+#    #+#              #
#    Updated: 2022/12/05 10:04:58 by lucida-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = 	ft_isalpha.c ft_toupper.c ft_isdigit.c \
	ft_tolower.c ft_isalnum.c ft_strlen.c \
	ft_isprint.c ft_isascii.c ft_strchr.c \
	ft_memset.c ft_bzero.c ft_strlcpy.c \
	*ft_memcpy.c ft_memmove.c ft_strrchr.c\
    	ft_strlcat.c ft_strncmp.c ft_memchr.c \
	ft_memcmp.c ft_atoi.c ft_calloc.c \
	ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c \
	ft_putendl_fd.c ft_itoa.c ft_strtrim.c \
	ft_strnstr.c ft_strmapi.c ft_striteri.c \
	ft_split.c ft_lstdelone.c ft_lstclear.c \

BONUS_C =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		ft_lstlast.c ft_lstadd_back.c 

OBJS = $(SRC:.c=.o)
BONUS = $(BONUS_C:.c=.o)
HEADER = libft.h
LIB = ar -rcs
CFLAGS = -Wall -Werror -Wextra

%.o:%.c
	gcc $(CFLAGS) -I $(HEADER) -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
	$(LIB) $(NAME) $(OBJS)

all: $(NAME)

bonus: $(NAME) $(BONUS)
	$(LIB) $(NAME) $(BONUS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
