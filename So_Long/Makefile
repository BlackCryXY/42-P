# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 11:25:47 by tsantiag          #+#    #+#              #
#    Updated: 2023/01/11 12:55:48 by tsantiag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long

SRC = game_logic/character_errors.c \
	game_logic/game_controls.c \
	game_logic/game_graphics.c \
	game_logic/keyboard_inputs.c \
	game_logic/map_errors.c \
	game_logic/map_logic.c \
	game_logic/so_long.c \

OBJS = $(SRC:.c=.o)

GNL	= GNL/*.c
PRINTF_A = libftprintf.a
PRINTF_DIR = printf/
PRINTF = $(addprefix $(PRINTF_DIR), $(PRINTF_A))

INCLUDE = includes/

.c.o :
	cc -Wall -Wextra -I/usr/include -Imlx_linux -O3 -c $< -o ${<:.c=.o}

NOC	= \033[0m
GREEN	= \033[1;32m


all: ${NAME}

$(NAME): ${OBJS}
	make -C $(PRINTF_DIR)
	cc ${OBJS} minilibx-linux/libmlx.a minilibx-linux/libmlx_Linux.a -L. -lXext -L. -lX11 $(GNL) ${PRINTF} -o $(NAME)
	@echo "$(GREEN)Project compiled succesfully$(NOC)"

clean:
	@echo "$(GREEN)Cleaning libraries$(NOC)"
	make clean -C printf
	rm -f $(OBJS)

fclean: clean
	make fclean -C printf
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
