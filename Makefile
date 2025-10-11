# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/30 14:37:19 by heverdug          #+#    #+#              #
#    Updated: 2025/10/11 17:16:30 by heverdug         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

BONUS = .bo

SRC = ft_bzero.c ft_split.c ft_isalpha.c ft_isdigit.c ft_substr.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_memmove.c ft_memcpy.c ft_strchr.c ft_strjoin.c ft_strlen.c ft_strtrim.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_substr.c ft_putnbr_fd.c

OFL = $(SRC:.c=.o)

BNS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstmap.c ft_lstlast.c ft_lstiter.c ft_lstdelone.c ft_lstadd_back.c ft_lstclear.c

OBNS = $(BNS:.c=.o)

INC = libft.h

FLAGS = -Wall -Wextra -Werror -g

all: bonus_checker $(NAME)

bonus: $(BONUS)

$(NAME): $(OFL)
	ar crs $(NAME) $(OFL)
	echo "Libft.a Compiled"

bonus_checker:
	if ls ./.bo 1> /dev/null 2>&1; then \
		make fclean -C . --no-print-directory; \
	fi


$(BONUS): $(OBNS) $(OFL)
	ar crs $(NAME) $(OFL) $(OBNS)
	touch .bo

%.o: %.c $(INC) Makefile
	echo "Compiling $<"
	cc $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OFL) $(OBNS) $(BONUS)

fclean:
	rm -rf $(OFL) $(OBNS) $(BONUS) $(NAME)

re: fclean all

.PHONY: all clear fclear re bonus
.SILENT:
