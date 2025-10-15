# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heverdug <heverdug@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/30 14:37:19 by heverdug          #+#    #+#              #
#    Updated: 2025/10/15 14:24:18 by heverdug         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c ft_split.c ft_isalpha.c ft_isdigit.c ft_substr.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_memmove.c ft_memcpy.c ft_strchr.c ft_strjoin.c ft_strlen.c ft_strtrim.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_substr.c ft_putnbr_fd.c

OFL = $(SRC:.c=.o)

BNS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstmap_bonus.c ft_lstlast_bonus.c ft_lstiter_bonus.c ft_lstdelone_bonus.c ft_lstadd_back_bonus.c ft_lstclear_bonus.c

OBNS = $(BNS:.c=.o)

INC = libft.h

FLAGS = -Wall -Wextra -Werror -g

all: bonus_checker $(NAME)


bonus: 
	$(MAKE) WB=1 --no-print-directory $(NAME)

ifdef WB
ALL_OBJ := $(OFL) $(OBNS)
else
ALL_OBJ := $(OFL)
endif

$(NAME): $(ALL_OBJ)
	ar crs $(NAME) $(ALL_OBJ)
	echo "$(NAME) Compiled"

bonus_checker:
	if ls ./ft_lstnew_bonus.o 1> /dev/null 2>&1; then \
		make delete -C . --no-print-directory; \
	fi

%.o: %.c $(INC) Makefile
	cc $(FLAGS) -c $< -o $@
	echo "$< Compiled"

delete:
	ar d $(NAME) $(OBNS)
	echo "Bonus files remove"
	rm -rf $(OBNS)
	echo "Bonus files deleted"

clean:
	rm -rf $(OFL) $(OBNS)
	echo "O-files deleted"

fclean:
	rm -rf $(OFL) $(OBNS) $(NAME)
	echo "O-files and $(NAME) deleted"

re: fclean all
	echo "Again"

.PHONY: all clear fclear re bonus bonus_checker delete
.SILENT:
