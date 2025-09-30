# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/30 14:37:19 by heverdug          #+#    #+#              #
#    Updated: 2025/09/30 16:24:22 by heverdug         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c ft_split.c ft_isalpha.c ft_isdigit.c ft_substr.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_strchr.c ft_strjoin.c ft_strlen.c ft_strtrim.c

INC = libft.h

FLAGS = -Wall -Wextra -Werror

OFL = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OFL) $(INC) Makefile
	ar crs $(NAME) $(OFL)

%.o: %.c
	cc $(FLAGS) -I $(INC) -c $< -o $@

clean:
	rm -rf $(OFL)

fclean:
	rm -rf $(OFL) $(NAME)

re:
	make fclean
	make all

.PHONY: all clear fclear re
