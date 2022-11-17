## ########################################################################## ##
##                                                                            ##
##                                                        :::      ::::::::   ##
##   Makefile                                           :+:      :+:    :+:   ##
##                                                    +:+ +:+         +:+     ##
##   By: tsantiag <tsantiag>                        +#+  +:+       +#+        ##
##                                                +#+#+#+#+#+   +#+           ##
##   Created: 2022/11/15 16:24:34 by tsantiag          #+#    #+#             ##
##   Updated: 2022/11/17 12:58:47 by tsantiag         ###   ########.fr       ##
##                                                                            ##
## ########################################################################## ##

CC			= 		cc
CFLAGS		= 		-Wall -Wextra -Werror
NAME		= 		libftprintf.a
RM			= 		/bin/rm -f

SRCS		=		ft_printf.c ft_usefonc.c ft_usefonc2.c ft_treat_char.c ft_treat_nbr.c \
					ft_treat_string.c ft_treat_hexa.c ft_input.c 

OBJS		= $(SRCS:.c=.o)

all:		= $(NAME)

$(NAME)		$(OBJS)
					ar rcs $(NAME) $(OBJS)
.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re 
