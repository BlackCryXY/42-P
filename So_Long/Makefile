# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsantiag <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 11:25:47 by tsantiag          #+#    #+#              #
#    Updated: 2022/12/07 11:46:28 by tsantiag         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
CFLAGS		= -Wall -Wextra -Werror -MMD -g3 -I
NAME		= So_Long
RM		= /bin/rm -rf

SRCS		=


OBJS		= $(SRCS:.c=.o)

DEPS		= ${SRCS:.c=.d}

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)
.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
		$(RM)  $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean $(NAME)

-include ${DEPS}

.PHONY:		all clean fclean re
