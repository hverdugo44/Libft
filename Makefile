# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/30 14:37:19 by heverdug          #+#    #+#              #
#    Updated: 2025/10/10 02:05:24 by hverdugo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c ft_split.c ft_isalpha.c ft_isdigit.c ft_substr.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_memmove.c ft_memcpy.c ft_strchr.c ft_strjoin.c ft_strlen.c ft_strtrim.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_substr.c

INC = libft.h

FLAGS = -Wall -Wextra -Werror -g

OFL = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OFL) $(INC) Makefile
	ar crs $(NAME) $(OFL)

%.o: %.c
	cc $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OFL)

fclean:
	rm -rf $(OFL) $(NAME)

re:
	make fclean
	make all

.PHONY: all clear fclear re
