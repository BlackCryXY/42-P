# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 11:25:47 by tsantiag          #+#    #+#              #
#    Updated: 2023/01/10 14:31:41 by tsantiag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= so_long
CC	= cc
FLAGS	= -Wall -Wextra -Werror -I -g

GNL	= GNL
PRINTF	= ft_printf
HEADERS	= headers
OBJ_PATH	= objs
SRC_PATH	= game_logic
MLX	= minilibx-linux

SOURCES	=	so_long.c \
		character_errors.c \
		game_graphics.c \
		map_errors.c \
		game_controls.c \
		keyboard_inputs.c \
		map_logic.c \


SRCS	= $(addprefix $(SRC_PATH)/,$(SOURCES))
OBJS	= $(addprefix $(OBJ_PATH)/,$(SOURCES:.c=.o))


NOC         = \033[0m
BOLD        = \033[1m
UNDERLINE   = \033[4m
BLACK       = \033[1;30m
RED         = \033[1;31m
GREEN       = \033[1;32m
YELLOW      = \033[1;33m
BLUE        = \033[1;34m
VIOLET      = \033[1;35m
CYAN        = \033[1;36m
WHITE       = \033[1;37m

all:	lib tmp $(NAME)

lib:
	@echo "$(GREEN)Creating lib files$(CYAN)"
	@make -C $(PRINTF)
	@make -C $(MLX)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -L $(PRINTF) -L $(MLX) -L $(GNL) -o $@ $^ -lft -lmlx -lXext -lX11 -lm
	@echo "$(WHITE)Creation of object file -> $(BLUE)$(notdir $@)... $(RED)[Done]$(NOC)"

clean:
	@echo "$(GREEN)Cleaning libraries$(CYAN)"
	@make clean -C $(PRINTF)
	@rm -rf $(OBJ_PATH)

fclean:
	@echo "$(GREEN)Cleaning libraries files$(CYAN)"
	@rm -rf $(OBJ_PATH)
	@rm -f $(NAME)
	@make fclean -C $(PRINTF)

re: fclean all


.PHONY:	all clean fclean re
