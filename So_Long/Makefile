# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 11:25:47 by tsantiag          #+#    #+#              #
#    Updated: 2023/01/05 15:46:43 by tsantiag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= so_long
CC	= cc
CFLAGS	= -Wall -Wextra -Werror -I
RM	= /bin/rm -f
SRCS	= game_logic/*.c
OBJS	= $(SRCS:.c=.o)

all:	= $(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)
.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
		$(RM) $(OBJS)
fclean:		clean
			$(RM) $(NAME)
re:			fclean $(NAME)

.PHONY:		all clean fclean re
