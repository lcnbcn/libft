# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 21:12:10 by lucida-s          #+#    #+#              #
#    Updated: 2022/12/10 18:04:07 by lucida-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

NAME_BONUS = .bonus

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
		ft_split.c

BONUS_C =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c  ft_lstiter.c ft_lstmap.c

OBJS =		$(SRC:.c=.o)

BONUS =		$(BONUS_C:.c=.o)

HEADER =	libft.h

MKFILE =	Makefile

LIB =		ar -rcs

CFLAGS =	-Wall -Werror -Wextra

all:
		@$(MAKE) $(NAME)

bonus:
		@$(MAKE) $(NAME_BONUS)

%.o:	%.c $(HEADER) $(MKFILE)
		gcc $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			@rm -rf $(NAME_BONUS)
			$(LIB) $(NAME) $^

$(NAME_BONUS):	$(OBJS) $(BONUS)
				$(LIB) $(NAME) $^ 
				@touch $@
clean:
	rm -f $(OBJS) $(BONUS)

fclean: clean
	rm -f $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: all clean fclean re bonus

# $< este hace referencia al primer elemento despues de los dos puntos.(dependencia)
# $^ este hace referencia a 'todos' elementos despues de los dos puntos.(dependencia)
# $@ este hace referencia al elemento antes de los dos puntos.(regla)
