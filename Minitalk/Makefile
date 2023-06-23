SERVER = server
CLIENT = client

SRC = srcs/client.c \
      srcs/server.c \
      utils/utils1.c

OBJS = $(SRC:.c=.o)

PRINTF = ft_printf

FLAGS = -Wall -Wextra -Werror

all: $(SERVER) $(CLIENT)

$(SERVER): $(OBJS)
	@make -s -C $(PRINTF)
	@cc $(FLAGS) srcs/server.c -o $(SERVER) $(PRINTF)/libftprintf.a
	@echo "Server is ready!"

$(CLIENT): $(OBJS)
	@make -s -C $(PRINTF)
	@cc $(FLAGS) srcs/client.c -o $(CLIENT) $(PRINTF)/libftprintf.a
	@echo "Client is ready!"

clean:
	@make clean -s -C $(PRINTF)
	@rm -f $(OBJS)

fclean: clean
	@make fclean -s -C $(PRINTF)
	@rm -f $(SERVER) $(CLIENT)
	@echo "Server and Client have been cleaned successfully!"

re: fclean all

.PHONY: all clean fclean re