# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmichael <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/05 11:22:49 by jmichael          #+#    #+#              #
#    Updated: 2019/06/07 10:46:22 by jmichael         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -c -Wall -Werror -Wextra -I.

NAME = libft.a

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memchr.c ft_strlen.c ft_strdup.c ft_strcpy.c \
	   ft_strncpy.c ft_strcat.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	   ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c ft_islower.c ft_putchar.c \
	   ft_strdel.c ft_putstr.c ft_putendl.c ft_putchar_fd.c ft_putstr_fd.c ft_strnew.c\
	   ft_putendl_fd.c ft_strncmp.c ft_atoi.c ft_memcmp.c ft_memdel.c ft_strclr.c ft_striter.c\
	   ft_isspace.c ft_strtrim.c ft_strsub.c ft_putnbr.c ft_putnbr_fd.c ft_strncat.c \
	   ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_itoa.c \
	   ft_memmove.c ft_memccpy.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c \
	   ft_strjoin.c ft_strsplit.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	gcc $(FLAGS) $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean, fclean, re, all
