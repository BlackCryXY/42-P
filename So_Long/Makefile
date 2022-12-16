# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 11:25:47 by tsantiag          #+#    #+#              #
#    Updated: 2022/12/16 16:24:01 by tsantiag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
CFLAGS		= -Wall -Wextra -Werror -MMD -g3 -I
NAME		= solong
OBJ_PATH	= game_logic
HEADERS		= headers
MLX		= minilibx-linux
ft_printf	= ft_printf

SOURCES	=	solong.c\
		character_errors.c\
		game_controls.c\
		game_controls_keyboard.c\
		game_graphics.c\
		map_errors.c\
		map_logic.c\


OBJS	= $(addprefix $(OBJ_PATH)/,$(SOURCES))
SRCS	= $(addprefix $(SRC_PATH)/,$(SOURCES))

NOC	= \033[0m
GREEN	= \033[1;32m
CYAN	= \033[1;36m


all:	lib tmp $(NAME)

lib:
	@echo "$(GREEN)Creating lib files$(NOC)"
	@make -C $(MLX)
	@make -C $(ft_printf)
$(NAME): $(OBJS)	
	$(CC) $(FLAGS) -L $(ft_printf) -L $(MLX) -o 
	$@ $^ -l:libftprintf.a -lmlx -lXext -lX11 -lm
	@echo "$(GREEN)Project compiled succesfully$(NOC)"

tmp:
	@mkdir -p objs

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(HEADER)/*.h
	@$(CC) $(CFLAGS) -c -o $@ $<
	@echo "$(CYAN)Creation of object file -> $(CYAN)$(notdir $@)... $(GREEN)[Done]$(NOC)"

clean:
	@echo "$(GREEN)Cleaning libraries$(NOC)"
	@make clean -C $(ft_printf)
	@rm -rf $(OBJ_PATH)

fclean:
	@echo "$(GREEN)Cleaning libraries files$(NOC)"
	@rm -rf $(OBJ_PATH)
	@rm -f $(NAME)
	@make fclean -C $(ft_printf)

re: fclean all

