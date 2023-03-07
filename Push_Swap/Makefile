# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 14:45:37 by tsantiag          #+#    #+#              #
#    Updated: 2023/03/07 14:49:48 by tsantiag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap

SOURCES	=	rules/ft_push.c \
		rules/ft_reverse.c \
		rules/ft_rotate.c \
		rules/ft_swap.c \
		sorting/ft_sort_3_numbers.c \
		sorting/ft_sort_5_numbers.c \
		sorting/ft_beyond_5.c \
		utils/utils1.c \
		utils/utils2.c \
		utils/utils3.c \

OBJECTS = $(SOURCES:.c=.o)

INCLUDE = includes/

.c.o :
	cc -Wall -Werror -Wextra -I/usr/include -c $< -o ${<:.c=.o}

NOC	= \033[0m
GREEN	= \033[1;32m

all: $(NAME)

$(NAME): $(OBJS)
	cc $(OBJS) -o $(NAME)
	@echo "$(GREEN)Project compiled succesfully$(NOC)"

clean:
	@echo "$(GREEN)Cleaning libraries$(NOC)"
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
